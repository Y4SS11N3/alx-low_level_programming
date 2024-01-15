#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - checks for lowercase character
 * @c: The character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to check
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((_islower(c) || (c >= 'A' && c <= 'Z')));
}

/**
 * _abs - computes the absolute value of an integer
 * @n: The integer to check
 *
 * Return: The absolute value of int
 */
int _abs(int n)
{
	return (n >= 0 ? n : -n);
}

/**
 * _isupper - checks for uppercase character
 * @c: The character to check
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: The character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - returns the length of a string
 * @s: The string to check
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s && s[length])
	{
		length++;
	}
	return (length);
}

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @s: The string to print
 */
void _puts(char *s)
{
	while (s && *s)
	{
		_putchar(*s++);
	}
	_putchar('\n');
}

/**
 * _strcpy - copies the string pointed to by src, including the terminating null byte ('\0'), to the buffer pointed to by dest
 * @dest: The buffer to copy the string to
 * @src: The source string to copy
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (src && *src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (start);
}

/**
 * _atoi - convert a string to an integer
 * @s: The string to be converted
 *
 * Return: The integer value of the converted string
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (_isdigit(*s))
			result = result * 10 + (*s - '0');
		else if (result)
			break;
		s++;
	}
	return (result * sign);
}

/**
 * _strcat - concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: The pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (start);
}

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes to use from src
 *
 * Return: The pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;

	while (*dest)
		dest++;
	while (n-- && *src)
		*dest++ = *src++;
	*dest = '\0';
	return (start);
}

/**
 * _strcpy - copies src string to dest buffer, including '\0'
 * @dest: The buffer to copy the string to
 * @src: The source string to copy
 * @n: The number of bytes to copy
 *
 * Return: The pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;

	while (n--)
	{
		*dest++ = *src ? *src++ : '\0';
	}
	return (start);
}

/**
 * _strcmp - compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: The difference between the two strings
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/**
 * _memset - fills memory with a constant byte
 * @s: The memory area to fill
 * @b: The byte to fill with
 * @n: The number of bytes to fill
 *
 * Return: The pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s++ = b;
	}
	return (start);
}

/**
 * _memcpy - copies memory area
 * @dest: The destination memory area
 * @src: The source memory area
 * @n: The number of bytes to copy
 *
 * Return: The pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest++ = *src++;
	}
	return (start);
}

/**
 * _strchr - locates a character in a string
 * @s: The string to search
 * @c: The character to locate
 *
 * Return: Pointer to first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}
	return (*s == c) ? s : NULL;
}

/**
 * _strspn - gets the length of a prefix substring
 * @s: The main string to be scanned
 * @accept: The string containing the list of characters to match in s
 *
 * Return: Count of initial characters in s matching any in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s && _strchr(accept, *s++))
	{
		count++;
	}
	return (count);
}

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: The string to be scanned
 * @accept: The string containing the characters to match
 *
 * Return: Pointer to first matching character or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s))
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}

/**
 * _strstr - locates a substring
 * @haystack: The main string to be scanned
 * @needle: The small string to be searched within haystack
 *
 * Return: Pointer to the start of needle in haystack, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *start_n;

	while (*haystack)
	{
		start_n = needle;
		char *start_h = haystack;

		while (*haystack && *start_n && *haystack == *start_n)
		{
			haystack++;
			start_n++;
		}
		if (!*start_n)
		{
			return (start_h);
		}
		haystack = start_h + 1;
	}
	return (NULL);
}
