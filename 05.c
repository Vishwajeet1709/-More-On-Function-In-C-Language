//TSRN function to print first N prime numbers
#include<stdio.h>
void PrintPrime (int n)
{
    int i,j,flag,count=0;
    printf("\n\nFirst %d prime numbers : ",n);

    for(i=2;count<n;i++)
    {
        flag=0;
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
                flag++;
        }
        if(flag==1)
        {
            printf(" %d",i);
            count++;
        }
    }
}
int main()
{
    int n;
    printf("Enter a number to print first N prime numbers : ");
    scanf("%d",&n);
    PrintPrime(n);
    return 0;
}
