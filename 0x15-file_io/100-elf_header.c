#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <elf.h>

void check_elf(unsigned char *e_ident);
void print_elf_header_info(const Elf64_Ehdr *header);
void close_elf(int elf);

/**
 * check_elf - checks if a file is an ELF file.
 * @e_ident: pointer to the ELF identification data.
 */
void check_elf(unsigned char *e_ident)
{
	/* Check for ELF file signature */
	int idx;

	for (idx = 0; idx < 4; idx++)
	{
		if (e_ident[idx] != 127 && e_ident[idx] != 'E' &&
			e_ident[idx] != 'L' && e_ident[idx] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_elf_header_info - prints information from the ELF header.
 * @header: pointer to the ELF header structure.
 */
void print_elf_header_info(const Elf64_Ehdr *header)
{
	/* Printing ELF header components */
	int idx;
	unsigned int type;

	/* Printing Magic Numbers */
	printf("  Magic:   ");
	for (idx = 0; idx < EI_NIDENT; idx++)
	{
		printf("%02x", header->e_ident[idx]);
		printf(idx < EI_NIDENT - 1 ? " " : "\n");
	}

	/* Printing Class */
	printf("  Class:                             ");
	switch (header->e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", header->e_ident[EI_CLASS]);
	}

	/* Printing Data */
	printf("  Data:                              ");
	switch (header->e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", header->e_ident[EI_DATA]);
	}

	/* Printing Version */
	printf("  Version:                           ");
	if (header->e_ident[EI_VERSION] == EV_CURRENT)
	{
		printf("%d (current)\n", header->e_ident[EI_VERSION]);
	}
	else
	{
		printf("%d\n", header->e_ident[EI_VERSION]);
	}

	/* Printing OS/ABI information */
	printf("  OS/ABI:                            ");
	switch (header->e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", header->e_ident[EI_OSABI]);
	}

	/* Printing ABI Version */
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);

	/* Printing Type of ELF file */
	type = header->e_type;
	if (header->e_ident[EI_DATA] == ELFDATA2MSB) /* Adjust type for big-endian systems */
		type = (type >> 8) | (type << 8);

	printf("  Type:                              ");
	switch (type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", type);
	}

	/* Printing Entry Point Address */
	printf("  Entry point address:               ");
	if (header->e_ident[EI_CLASS] == ELFCLASS64)
		printf("%#lx\n", header->e_entry);
	else
		printf("%#x\n", (unsigned int)header->e_entry);
}

/**
 * close_elf - closes an open ELF file descriptor.
 * @elf: file descriptor of the ELF file.
 */
void close_elf(int elf)
{
	/* Closing the ELF file descriptor */
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", elf);
		exit(98);
	}
}

/**
 * main - main function to process an ELF file.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: returns 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	/* Main function to process ELF file */

	Elf64_Ehdr *header;
	int elf, r;

	/* Argument check and file opening */
	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		return (98);
	}
	elf = open(argv[1], O_RDONLY);
	if (elf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	/* Memory allocation for ELF header */
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(elf);
		dprintf(STDERR_FILENO, "Error: Can't allocate memory\n");
		exit(98);
	}

	/* Reading ELF header */
	r = read(elf, header, sizeof(Elf64_Ehdr));
	if (r == -1 || r != sizeof(Elf64_Ehdr))
	{
		free(header);
		close_elf(elf);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file or read error\n", argv[1]);
		exit(98);
	}

	/* ELF file validation and information printing */
	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_elf_header_info(header);

	/* Resource cleanup */
	free(header);
	close_elf(elf);

	return (0);
}
