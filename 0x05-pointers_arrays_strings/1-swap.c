#include "main.h"

/**
* reset_to_98 -a function that takes a pointer to an int
*@a: int value
*@b: int value
* Return: Always 0.
*/
void swap_int(int *a, int *b)
{
int n = *a;
*a = *b;
*b = n;

}
