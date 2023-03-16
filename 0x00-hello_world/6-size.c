#include <stdio.h>
/**
 * main - Entry of the program
 * Return: Always returns (0)
 */
int main(void)
{
	long long int D;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(D));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
