#include "main.h"
/**
 * _strlen - function name
 * @s: parameter
 * Return: length of the strings
 */

int _strlen(char *s)

{
int i;
int count = 0;
for (i = 0; s[i] != '\0'; i++)
count++;

return (count);

}
