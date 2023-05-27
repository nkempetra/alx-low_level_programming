include "main.h"

/**
 * main - Entry point
 * program that displays the information contained
 * in the ELF header at the start of an ELF file.
 *
 * @ac: number of arguments passed to the program
 * @av: array of argument passed to the program
 *
 * Return:
 *	- 0 Success.
 */

int main(int ac, char *av[])
{
	int file, i = 0, c = 0, v = 0;
	Elf64_Ehdr head;

	if (ac != 2)
		pstderr(0, av[0]);/* Usage */
	file = open(av[1], O_RDONLY);/* open file */
	if (file < 0)
		pstderr(1, av[1]);
	if (read(file, &head, sizeof(head)) < 0)
	{
		c = close(file);
		if (c < 0)
			pstderr(3, av[1]);
		pstderr(2, av[1]);
	}
	checkfile(head.e_ident, file, av[1]);/* check if elf file */
	printf("ELF Header:\n");
	printf("  Magic:  ");/* print magic number */
	while (i < EI_NIDENT)
		printf(" %02x", head.e_ident[i]), i++;
	printf("\n  Class:                             %s\n",
			(head.e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
	printf("  Data:                              2's complement, %s endian\n",
			head.e_ident[EI_DATA] == ELFDATA2LSB ? "little" : "big");
	v = head.e_ident[EI_VERSION];
	printf("  Version:                           %d%s\n",
			v, v == EV_CURRENT ? " (current)" : "");
	printf("  OS/ABI:                            %s\n",
			os_abi(head.e_ident[EI_OSABI]));
	printf("  ABI Version:                       %d\n",
			head.e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n", otype(head.e_type));
	printf("  Entry point address:               %#lx\n",
			getep(head.e_entry, head.e_ident[EI_DATA]) & 0xFFFFFFF);
	/* close file */
	c = close(file);
	if (c < 0)
		pstderr(3, av[1]);
	return (0);
}

/**
 * getep - return the right value of
 * the entry point value for big and little endian
 *
 * @ep: Entry point value.
 * @data: Data type.
 *
 * Return:
 *	- converted value of Entry point.
 */

unsigned long int getep(unsigned long int ep, int data)
{
	if (data != ELFDATA2LSB)
		ep = (ep >> 24) | ((ep >> 8) & 0xFF00) |
			((ep << 8) & 0xFF0000) | (ep << 24);
	return (ep);
}
/**
 * otype - return the object file type
 *
 * @t: object type id.
 *
 * Return:
 *	- object file type
 */
char *otype(int t)
{
	switch (t)
	{
		case ET_NONE:
			return ("NONE (Unknown type)");
		case ET_REL:
			return ("REL (Relocatable file)");
		case ET_DYN:
			return ("DYN (Shared object file)");
		case ET_CORE:
			return ("core file");
		default:
			return ("EXEC (Executable file)");
	}
}
/**
 * os_abi - return one of The eighth byte
 * identifies the operating system and ABI to which  the  object  is targeted.
 *
 * @oa: EI_OSABI value to check.
 *
 * Return:
 *	- OS and ABI
 */
char *os_abi(int oa)
{
	switch (oa)
	{
		case ELFOSABI_NONE || ELFOSABI_SYSV:
			return ("UNIX - System V");
		case ELFOSABI_HPUX:
			return ("UNIX - HP-UX");
		case ELFOSABI_NETBSD:
			return ("UNIX - NetBSD");
		case ELFOSABI_LINUX:
			return ("UNIX - Linux");
		case ELFOSABI_SOLARIS:
			return ("UNIX - Solaris");
		case ELFOSABI_IRIX:
			return ("UNIX - IRIX");
		case ELFOSABI_FREEBSD:
			return ("UNIX - FreeBSD");
		case ELFOSABI_TRU64:
			return ("UNIX - TRU64");
		case ELFOSABI_ARM:
			return ("UNIX - ARM");
		case ELFOSABI_STANDALONE:
			return ("UNIX - Stand-alone (embedded)");
		default:
			return ("<unknown: 53>");
	}
}

/**
 * checkfile - check the type of file if it s elf.
 *
 * @m: magic number of the file.
 * @f: file descriptor.
 * @data: name of file.
 *
 * Return:
 *	- 0 Success.
 */
int checkfile(unsigned char *m, int f, char *data)
{
	int c;

	if (!(m[0] == 0x7f && m[1] == 'E' && m[2] == 'L' && m[3] == 'F'))
	{
		c = close(f);
		if (c < 0)
			pstderr(3, data);
		pstderr(4, data);
	}
	return (0);
}
/**
 * pstderr - handle error messages.
 * send error message to stderr
 *
 * @id: id of the error.
 * @data: string to print.
 *
 * Return:
 *	- 0 Success
 */

int pstderr(int id, char *data)
{
	switch (id)
	{
		case 0:
			dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", data);
			exit(98);
			break;
		case 1:
			dprintf(STDERR_FILENO, "Can't open file: %s\n", data);
			exit(98);
			break;
		case 2:
			dprintf(STDERR_FILENO, "Can't read file: %s\n", data);
			exit(98);
			break;
		case 3:
			dprintf(STDERR_FILENO, "Can't close file: %s\n", data);
			exit(98);
			break;
		default:
			dprintf(STDERR_FILENO, "Unvalid file format: %s\n", data);
			exit(98);
			break;
	}
	return (0);
}
