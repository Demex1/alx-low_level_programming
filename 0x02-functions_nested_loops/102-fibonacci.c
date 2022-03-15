#include <stdio.h>

/**
* main - Prints natural numbers below 1024 that are
* multiplies of 3 or 5
*
* Return: Always 0.
*/
int main(void)
{
int n1 = 0,n2 = 1,n3,i;      
printf("%d %d", ",n1,n2);//printing 0 and 1    
for(i=2;i<=50;++i)//loop starts from 2 because 0 and 1 are already printed    
{    
n3=n1+n2;    
printf(" %d",n3);    
n1=n2;    
n2=n3;    
}  
return (0);
}
