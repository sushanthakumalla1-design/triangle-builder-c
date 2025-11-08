#include <stdio.h>

void print_brick_row(int spaces,int bricks); // Function prototype: prints a single row of the mirrored triangle

int main ()
{ 
    printf("Enter the height of the triangle: "); // Prompt user for input
    int n;
    scanf("%i",&n);
    
    if (n>1) // Validate input
    {
        // Loop from 1 to n, printing each row
        for (int i=1;i<=n;i++) 
        {
            print_brick_row(n-i,i); // n - i = number of leading spaces, i = number of bricks
        }
        return 0;
    }
    else
    {
        printf("Sorry I dont understand that.");
        return 1;
    }
    
}

void print_brick_row(int spaces,int bricks)
{
    for (int i=0;i<spaces;i++) //Print left side of the triangle
    {
        printf(" ");
    }
    for (int j=0;j<bricks;j++)
    {
        printf("*");
    }

    printf(" "); //Print middle space gap

    for(int i=0;i<bricks;i++) //Print right side of the triangle   
    {
        printf("*");
    }
    printf("\n");
}