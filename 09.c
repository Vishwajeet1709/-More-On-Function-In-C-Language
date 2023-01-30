//function to find square of any number
#include<stdio.h>
int squre (int n)
{
    return (n*n);
}
int main()
{
    int n;
    printf("Enter a number to calculate its square : ");
    scanf("%d",&n);
    printf("\n\n\t%d is the square of %d.\n\n",squre(n),n);
    return 0;
}
