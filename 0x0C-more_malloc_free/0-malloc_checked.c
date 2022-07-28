#include "main.h"
/**
 * malloc_checked - allocate memory using malloc .
 * Description: If malloc fails, terminate process wiht stauts 98.
 * @b: unsigned int memory size to allocate
 * Return: void pointer to malloc'd memmory spcae
 */
void *malloc_checked(unsigned int b)
{
void *P;
p = malloc(b);
if (p == NULL)
	exit(98);
return (p);
}
