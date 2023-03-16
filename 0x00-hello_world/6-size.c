#include<stdio.h>
/**
 * main - function that prints sizes of various types on the computer
 * Description: prints sizes of various types of data in C
 * Return: returns an integer(0)
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i bytes(s)\n", sizeof(int));
	printf("Size of a long int: %i bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %i byte(s)\n", sizeof(long long int));
	printf("Size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}
