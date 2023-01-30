//TSRS function to calculate HCF of two given numbers
#include<stdio.h>
int HCF (int a, int b)
{
    int min;
    min=a<b?a:b;
    while(1)
    {
        if(a%min==0 && b%min==0)
            return min;
        min--;
    }
}
int main()
{
    int num1, num2;
    printf("Enter any two numbers to calculate HCF : ");
    scanf("%d%d",&num1,&num2);
    printf("\n\nHCF of %d and %d is : %d\n\n",num1, num2, HCF(num1, num2));
    return 0;
}
