#include <stdio.h>
/**
 * main - Entry of the program
 * Return: Always returns (0)
 */
int main(void)
{
print("Size of a char:%c byte(s)\n", sizeof(char));
printf("Size of an int:%d byte(s)\n", (unsigned int)sizeof(int));
printf("Size of a long int:%d byte(s)\n", (unsigned int)sizeof(long int));
printf("Size of a long long int:%d byte(s)\n", (unsigned int)sizeof(long long int));
printf("Size of a float:%f byte(s)\n", sizeof(float));
return (0);
}
