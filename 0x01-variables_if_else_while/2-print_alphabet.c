#include<stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * followed by a newline
 * Return: Always 0 (success)
 */


int main(void)
{

	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	return (0);
}
