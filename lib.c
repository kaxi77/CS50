#include <stdio.h>
#include <cs50.c>

int main(void)

{
	char c = get_char("Please confirm with input: ");

	if (c == 'y')
	{
		printf("Agreed\n");
	}
	else
	{
		printf("Declined\n");
	}
}