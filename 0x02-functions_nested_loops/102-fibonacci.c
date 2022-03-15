#include <stdio.h>

/**
* main - Prints natural numbers below 1024 that are
* multiplies of 3 or 5
*
* Return: Always 0.
*/
int main(void)
{
int i;

int a = 0, b = 1;
int next = a + b;
printf("%d, %d", a, b);

for (i = 3; i <= 50; ++i)
{
printf("%d, ", next);
a = b;
b = next;
next = a + b;
}
return (0);
}
