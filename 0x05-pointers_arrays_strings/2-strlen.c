#include "main.h"
#include <stdio.h>

/**
* _strlen -a function that returns the length of a string.
*@s: string value
* Return: Always 0.
*/
int _strlen(char *s)
{
int len = 0;

while (*s != '\0')
{
s++;
len++;
}
return (len);
}
