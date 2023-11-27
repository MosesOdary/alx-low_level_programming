#include <string.h>
#include <elf.h>
#include <fcntl.h>
#include <stdbool.h>

#include "main.h"

#define REV(n) ((n << 24) | (((n >> 16) << 24) >> 16) | \
(((n << 16) >> 24) << 16) | (n >> 24))

/**
* Verify- check if file a valid ELF file
*
* @e_ident: the ELF struct
*/
void Verify(unsigned char *e_ident)
{
	if ((*(e_ident) == 0x7f) && (*(e_ident + 1) == 'E') &&
	    (*(e_ident + 2) == 'L') && (*(e_ident + 3) == 'F'))
	{
		printf("ELF Header:\n");
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: this file not is a valid ELF\n");
		exit(98);
	}
}

/**
* MagicNumber - print MagicNumber number
* @e_ident: the ELF struct
* return: no return is a void func.
*/
void MagicNumber(unsigned char *e_ident)
{
	__int16_t i; /* the index to count the MagicNumber bytes */
	__int16_t limit;

	limit = EI_NIDENT - 1;

	printf("  MagicNumber:   ");

	for (i = 0; i < limit; i++)
		printf("%02x ", *(e_ident + i));

	printf("%02x\n", *(e_ident + i));
}

/**
* ElfClass - print the ElfClass of the ELF
* @e_ident: the ELF struct
* return: no return is a void func.
*/
void ElfClass(unsigned char *e_ident)
{
	printf("  ElfClass:                             ");
	if (e_ident[EI_CLASS] == ELFCLASSNONE)
		printf("This ElfClass is invalid\n");
	else if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}

/**
* Data - print mthe Type of Data
* @e_ident: the ELF struct
* return: no return is a void func.
*/
void Data(unsigned char *e_ident)
{
	printf("  Data:                              ");
	if (e_ident[EI_DATA] == ELFDATANONE)
		printf("Unknown Data format\n");
	else if (e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_DATA]);
}

/**
* FileVer - print the file version
* @e_ident: the ELF struct
* return: no return is a void func.
*/
void FileVer(unsigned char *e_ident)
{
	printf("  FileVer:                           ");
	if (e_ident[EI_VERSION] == EV_CURRENT)
		printf("%i (current)\n", EV_CURRENT);
	else
		printf("%i\n", e_ident[EI_VERSION]);
}

/**
 * OS_ABI - print the os ABI
 * @e_ident: the ELF struct
 * return: no return is a void func.
 */
void OS_ABI(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");
	if (e_ident[EI_OSABI] == ELFOSABI_SYSV)
		printf("UNIX - System V\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_HPUX)
		printf("UNIX - HP-UX\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_LINUX)
		printf("UNIX - Linux\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_IRIX)
		printf("UNIX - IRIX\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_TRU64)
		printf("UNIX - TRU64\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_ARM)
		printf("ARM\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_STANDALONE)
		printf("Standalone App\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}

/**
* Type - print the Type
*
* @e_ident: the ELF struct
* @e_type: Data to compare and print.
*
* return: no return is a void func.
*/
void Type(unsigned int e_type, unsigned char *e_ident)
{
	e_ident[EI_DATA] == ELFDATA2MSB ? e_type = e_type >> 8 : e_type;

	printf("  Type:                              ");
	if (e_type == ET_NONE)
		printf("NONE (Unknown Type)\n");
	else if (e_type == ET_REL)
		printf("REL (Relocatable file)\n");
	else if (e_type == ET_EXEC)
		printf("EXEC (Executable file)\n");
	else if (e_type == ET_DYN)
		printf("DYN (Shared object file)\n");
	else if (e_type == ET_CORE)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", e_type);
}

/**
* EntryPoint - print the EntryPoint point
* @e_ident: the ELF struct
* @e_entry: the Data to print
* return: no return is a void func.
*/
void EntryPoint(unsigned int e_entry, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_entry = REV(e_entry);

	printf("  Entry point address:               ");
	printf("%#x\n", (unsigned int)e_entry);
}

/**
* main - read a ELF file.
* @argc: the number of args
* @argv: the Args
* section header: the header of this function is holberton.h
* Return: 0 in success
*/
int main(int argc, char *argv[])
{
	int fd, read_, close_;
	Elf64_Ehdr *file;

	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: error in # of args\n"), exit(98);

	file = malloc(sizeof(Elf64_Ehdr));
	
	if (!file)
		dprintf(STDERR_FILENO, "error in allocate memory\n"), exit(98);
	fd = open(*(argv + 1), O_RDONLY);
	
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *(argv + 1));
		exit(98);
	}
	
	read_ = read(fd, file, sizeof(Elf64_Ehdr));
	
	if (read_ == -1)
	{
		free(file);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *(argv + 1));
		exit(98);
	}
	Verify(file->e_ident);
	MagicNumber(file->e_ident);
	ElfClass(file->e_ident);
	Data(file->e_ident);
	FileVer(file->e_ident);
	OS_ABI(file->e_ident);
	printf("  ABI FileVer:                       ");
	printf("%i\n", file->e_ident[EI_ABIVERSION]);
	Type(file->e_type, file->e_ident);
	EntryPoint(file->e_entry, file->e_ident);
	
	free(file);
	close_ = close(fd);
	
	if (close_)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		exit(98);
	}

	return (0);
}

