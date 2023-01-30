//TSRS function to check given number is a prime number or not
#include<stdio.h>
int IsPrime (int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    printf("\n\nEnter a number to check whether it is prime or not : ");
    scanf("%d",&n);
    if(IsPrime(n))
        printf("\n\nYes, %d is a prime number.\n\n",n);
    else
        printf("\n\nNo, %d is not a prime number.\n\n",n);
    return 0;
}
