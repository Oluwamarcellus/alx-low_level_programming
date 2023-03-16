#include<stdio.h>
/**
 * main - function that prints sizes of various types on the computer
 * Description: prints sizes of various types of data in C
 * Return: returns an integer(0)
 */
int main(void)
{
	char a;
	int one;
	long int two;
	long long int three;
	float num;
	printf("Size of a char: %i byte(s)\n", sizeof(a));
	printf("Size of an int: %i bytes(s)\n", sizeof(one));
	printf("Size of a long int: %i bytes(s)\n", sizeof(two));
	printf("Size of a long long int: %i byte(s)\n", sizeof(three));
	printf("Size of a float: %i byte(s)\n", sizeof(num));
	return (0);
}
