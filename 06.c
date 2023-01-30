//TSRN function to print prime numbers between two given numbers
#include<stdio.h>
void PrintPrime (int a,int b)
{
    int i,j,flag;
    printf("\n\nPrime numbers between %d and %d : ",a,b);
    for(i=(a<b?a:b)+1;i<(a>b?a:b);i++)
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
        }
    }
    printf("\n\n");
}
int main()
{
    int a,b;
    printf("\nEnter Two Numbers to print prime numbers between them :");
    scanf("%d%d",&a,&b);
    PrintPrime(a,b);
    return 0;
}
