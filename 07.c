//TSRN function to print first n numbers of fibonacci series
#include<stdio.h>
void PrintFibonacci (int n)
{
    int i,fib,fib1=1,fib2=1;
    printf("\n\nFirst %d term(s) in fibonacci series : ",n);
        for(i=0;i<n;i++)
        {
            if(i==0)
                printf(" %d",fib1);
            else if(i==1)
                printf(" %d",fib2);
            else
            {
                fib=fib1+fib2;
                printf(" %d",fib);
                fib1=fib2;
                fib2=fib;
            }
        }
        printf("\n\n");
}
int main()
{
    int n;
    printf("Enter a number to print fibonacci series :");
    scanf("%d",&n);
    PrintFibonacci(n);
    return 0;
}
