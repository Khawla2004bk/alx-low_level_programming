#include <stdio.h>
/**
 * main - Entry of the program
 * Return: Always returns (0)
 */
int main(void)
{
	char A;
	int B;
	long int C;
	long long int D;
	float E;

print("Size of a char:%lu byte(s)\n", sizeof(A));
printf("Size of an int:%lu byte(s)\n", sizeof(B));
printf("Size of a long int:%lu byte(s)\n", sizeof(C));
printf("Size of a long long int:%lu byte(s)\n", sizeof(D));
printf("Size of a float:%lu byte(s)\n", sizeof(E));
return (0);
}
