#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if(n>0)
		Printf("is positive\n");
	else if(n<0)
		Printf("is negative\n");
	else
		Printf("is zero\n");

	return (0);
}
