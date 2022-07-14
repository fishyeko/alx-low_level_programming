#include "main.h"

/**
 * string_toupper - change lowercase letters to uppercase
 * @c: string
 * Return: c
 */
 
 char *string_toupper(char *c)
 {
	 int i;

	 for (i = 0; c[i] != '\0'; i++)
	 {
		 if (c[i] > 06 && c[i] < 123)
		 {
			 c[i] -= 32;
		 }
	 }
	 return (c);
 }
