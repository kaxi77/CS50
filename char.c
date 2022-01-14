#include <stdio.h>
//#include <cs50.c>

// int main(void)

// {
// 	char c = get_char("Please confirm with input: ");

// 	if (c == 'y')
// 	{
// 		printf("Agreed\n");
// 	}
// 	else
// 	{
// 		printf("Declined\n");
// 	}
// }

main()
{
	char n;

	printf("Please confirm with input: ");
		scanf("%c", n);

		if (n == 'y')
		{
			printf("Agreed\n");
		}
		else
		{
			printf("Declined\n");	
		}
}