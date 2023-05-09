#include "main.h"

void checking_elf(unsigned char *elfptr);
void printing_magic(unsigned char *elfptr);
void printing_class(unsigned char *elfptr);
void printing_data(unsigned char *elfptr);
void printing_version(unsigned char *elfptr);
void printing_os(unsigned char *elfptr);
void printing_abiversion(unsigned char *elfptr);
void printing_type(unsigned int elf_type, unsigned char *elfptr);
void printing_entry_point(unsigned long int elf_entry, unsigned char *elfptr);

/**
 * checking_elf - function that checks if a file is an ELF file
 * @elfptr: pointer to an array containing the ELF magic numbers
 * Description: If the file is not an ELF file - exit code 98
 */

void checking_elf(unsigned char *elfptr)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (elfptr[i] != 127 && elfptr[i] != 'E' &&
		elfptr[i] != 'L' && elfptr[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * printing_magic - function that prints the magic numbers
 * of an ELF header
 * @elfptr: pointer to an array containing the ELF magic numbers
 * Description: Magic numbers are separated by spaces
 */

void printing_magic(unsigned char *elfptr)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", elfptr[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * printing_class - function that prints the class of an ELF header
 * @elfptr: pointer to an array containing the ELF class
 */

void printing_class(unsigned char *elfptr)
{
	printf("  Class:                             ");

	switch (elfptr[EI_CLASS])
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
		printf("<unknown: %x>\n", elfptr[EI_CLASS]);
	}
}

/**
 * printing_data - function that prints the data of an ELF header
 * @elfptr: pointer to an array containing the ELF class
 */

void printing_data(unsigned char *elfptr)
{
	printf("  Data:                              ");

	switch (elfptr[EI_DATA])
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
		printf("<unknown: %x>\n", elfptr[EI_CLASS]);
	}
}

/**
 * printing_version - function that prints the version of an ELF header
 * @elfptr: A pointer to an array containing the ELF version
 */

void printing_version(unsigned char *elfptr)
{
	printf("  Version:                           %d",
	       elfptr[EI_VERSION]);

	if(elfptr[EI_VERSION] == EV_CURRENT)
	{
		printf(" (current)\n";
	}
	else
		printf("\n");
}

/**
 * printing_os - function that prints the ABI version of an ELF header
 * @elfptr: pointer to an array containing the ELF ABI version
 */

void printing_os(unsigned char *elfptr)
{
	printf("  ABI Version:                       %d\n",
			elfptr[EI_ABIVERSION]);
}

/**
 * printing_abiversion - function that prints the OS/ABI of an
 * ELF header
 * @elfptr: A pointer to an array containing ELF version
 */

void printing_abiversion(unsigned char *elfptr)
{
	printf("  OS/ABI:                            ");

	switch (elfptr[EI_OSABI])
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
		printf("<unknown: %x>\n", elfptr[EI_OSABI]);
	}
}

/**
 * printing_type - function that points the type of an ELF header
 * @elf_type: the ELF type
 * @elfptr: A pointer to an array containing the ELF class
 */

void printing_type(unsigned int elf_type, unsigned char *elfptr)
{
	if (elfptr[EI_DATA] == ELFDATA2MSB)
		elf_type >>= 8;

	printf("  Type:                              ");

	switch (elf_type)
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
		printf("<unknown: %x>\n", elf_type);
	}
}

/**
 * printing_entry - function that prints the entry point of an ELF header
 * @elf_entry: address of the ELF entry point
 * @elfptr: pointer to an array containing the ELF class
 */

void printing_entry(unsigned long int elf_entry, unsigned char *elfptr)
{
	printf("  Entry point address:               ");

	if (elfptr[EI_DATA] == ELFDATA2MSB)
	{
		elf_entry = ((elf_entry << 8) & 0xFF00FF00) |
			  ((elf_entry >> 8) & 0xFF00FF);
		elf_entry = (elf_entry << 16) | (elf_entry >> 16);
	}

	if (elfptr[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)elf_entry);

	else
		printf("%#lx\n", elf_entry);
}

/**
 * main - program that displays the information contained
 * in theELF header at the start of an ELF file
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers
 * Return: (0) on success
 * Description: If the file is not an ELF File
 * or the function fails - exit code 98
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (!header)
	{
		close(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	checking_elf(header->e_ident);
	printing_magic(header->e_ident);
	printing_class(header->e_ident);
	printing_data(header->e_ident);
	printing_version(header->e_ident);
	printing_abiversion(header->e_ident);
	printing_os(header->e_ident);
	printing_type(header->e_type, header->e_ident);
	printing_entry(header->e_entry, header->e_ident);

	free(header);
	close(o);
	return (0);
}
