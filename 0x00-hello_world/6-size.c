#include<stdio.h>
/**
 * main - function that prints sizes of various types on the computer
 * Description: prints sizes of various types of data in C
 * Return: returns an integer(0)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
