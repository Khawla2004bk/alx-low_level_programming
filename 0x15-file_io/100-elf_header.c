#include "elf_b.h"
#include "elf_a.h"

/**
 * print_version - Prints the version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 */
void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %d",
	       e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}
/**
 * close_elf - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}
/**
 * main - Displays the information contained in the
 *	ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 */
int main(__silent int argc, char *argv[])
{
	Elf64_Ehdr *h;
	int O, R;

	O = open(argv[1], O_RDONLY);
	if (O == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	h = malloc(sizeof(Elf64_Ehdr));
	if (h == NULL)
	{
		close_elf(O);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	R = read(O, h, sizeof(Elf64_Ehdr));
	if (R == -1)
	{
		free(h);
		close_elf(O);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(h->e_ident);
	printf("ELF Header:\n");
	print_magic(h->e_ident);
	print_class(h->e_ident);
	print_data(h->e_ident);
	print_version(h->e_ident);
	print_osabi(h->e_ident);
	print_abi(h->e_ident);
	print_type(h->e_type, h->e_ident);
	print_entry(h->e_entry, h->e_ident);

	free(h);
	close_elf(O);
	return (0);
}
