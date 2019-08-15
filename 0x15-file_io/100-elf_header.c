#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <sys/mman.h>
#include <stddef.h>
/**
 * print_magic - print magic info
 * @ptr: pointer.
 */
void print_magic(char *ptr)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < 16; i++)
		printf("%02x ", ptr[i]);
	printf("\n");
}
/**
 * print_32 - print info if 32 bits
 * @ptr: pointer.
 */
void print_32(char *ptr)
{
	Elf32_Ehdr *ptr_32;
	(void) ptr_32;
	(void) ptr;

	printf("  Class:                             ELF32\n");
	if ((ptr[5] + '0') == '1')
	{
		printf("  Data:                             2's complement\n");
	}
	else if ((ptr[5] + '0') == '2')
	{
		printf("  Data:                             2's complement\n");
	}
}
/**
 * get_class - check the class.
 * @ptr: pointer.
 * Return: return 1 if 32 and 2 if 64 bits.
 */
int get_class(char *ptr)
{
	if ((ptr[4] + '0') == '0')
	{
		dprintf(STDERR_FILENO, "Error: Invalid Class\n");
		exit(98);
	}
	else if ((ptr[4] + '0') == '1')
	{
		return (1);
	}
	else if ((ptr[4] + '0') == '2')
	{
		return (2);
	}
	return (0);
}
/**
 * ifelf - check if the file is elf.
 * @ptr: pointer.
 * Return: 1 if elf, 0 if not.
 */
int ifelf(char *ptr)
{
	int p_0 = (int)ptr[0];
	int p_E = ptr[1];
	int p_L = ptr[2];
	int p_F = ptr[3];

	if (p_0 == 127 && p_E == 'E' && p_L == 'L' && p_F == 'F')
		return (1);
	dprintf(STDERR_FILENO, "Error: not ELF file\n");
	exit(98);
}
/**
 * main - function that print information about an elf file.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int fd, class, ver;
	size_t flsz;
	char *ptr;

	if (argc != 2)
	{
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: can not open file %s\n", argv[1]);
		exit(98);
	}
	flsz = lseek(fd, 0, SEEK_END);
	ver = read(fd, ptr, flsz);
	if (ver == -1)
	{
		dprintf(STDERR_FILENO, "Error: can not read file %s\n", argv[1]);
		exit(98);
	}
	ifelf(ptr);
	printf("ELF Header:\n");
	print_magic(ptr);
	if (class == 1)
	{
		print_32(ptr);
	}
	if (class == 2)
	{
		print_32(ptr);
	}

	return (0);
}
