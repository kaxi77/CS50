// Prints an n-by-n grid of bricks with a loop


#include <cs50.c>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        //For user input
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    // This is for row
    for (int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("#");
        }
        printf("\n");
    }

}






          //For building right-aligned Piramide
          // //if(i + j < n -1)
          //     printf(" ");
          // else
