# include<stdio.h>

void print_brick_row(int spaces, int bricks);

int main ()
{
    printf("Enter the height of the triangle: ");
    int n;
    scanf("%i",&n);

    if (n>1)
    {
        for(int i=1;i<=n;i++)
        {
            print_brick_row(n-i, i);
        }
        return 0;
    }
    else 
    {
        printf("i dont understand, sorry i cant do that!!");
        return 1;
    }  
}

void print_brick_row(int space, int brick)
{
    for(int i=0;i<space;i++)
    {
        printf(" ");
    }
    for(int j=0;j<brick;j++)
    {
        printf("*");
    }
    printf("\n");


}
