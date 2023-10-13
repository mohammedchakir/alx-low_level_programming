#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints passwords for crackme5 executable.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char password[7], *codex;
	int len = strlen(argv[1]), a, b;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	b = (len ^ 59) & 63;
	password[0] = codex[b];

	b = 0;
	for (a = 0; a < len; a++)
		b += argv[1][a];
	password[1] = codex[(b ^ 79) & 63];

	b = 1;
	for (a = 0; a < len; a++)
		b *= argv[1][a];
	password[2] = codex[(b ^ 85) & 63];

	b = 0;
	for (a = 0; a < len; a++)
	{
		if (argv[1][a] > b)
			b = argv[1][a];
	}
	srand(b ^ 14);
	password[3] = codex[rand() & 63];

	b = 0;
	for (a = 0; a < len; a++)
		b += (argv[1][a] * argv[1][a]);
	password[4] = codex[(b ^ 239) & 63];

	for (a = 0; a < argv[1][0]; a++)
		b = rand();
	password[5] = codex[(b ^ 229) & 63];

	password[6] = '\0';
	printf("%s", password);
	return (0);
}
