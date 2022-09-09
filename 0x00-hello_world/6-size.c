#include <stdio.h>
/**
 * Main - prints the size of various types on the computer 
 * Return: 0
 */
int main(void)
{
	char single_character;
	int inter;
	long int long_print;
	long long int long_long_print;
	float floating_points;

	printf("Size of an int: %d byte(s)\n", sizeof(inter));
	printf("Size of a long int: %d byte(s)\n", sizeof(long_print));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long_long_print));
	printf("Size of a floating: %d byte(s)\n", sizeof(floating_points));
	return (0);
}
