#include "main.h"

int check_palindrome(char *s, int start, int end);
int string_length(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the input string
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = string_length(s);

	return (check_palindrome(s, 0, len - 1));
}

/**
 * check_palindrome - recursive function to check if a string is a palindrome
 * @s: the input string
 * @start: the starting index of the substring
 * @end: the ending index of the substring
 * Return: 1 if palindrome, 0 otherwise
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * string_length - calculates the length of a string
 * @s: the input string
 * Return: the length of the string
 */
int string_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + string_length(s + 1));
}

