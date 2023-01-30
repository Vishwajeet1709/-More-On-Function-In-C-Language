//TSRS function to find next prime number of a given number
#include<stdio.h>
int NextPrime (int n)
{
//    base case for smaller number 1,2,3,4
    int i,j,flag;
    if(n==2)
        return 3;
    else if(n==1)
        return 2;
//    code for next prime number
    else
    for(i=n+1;1;i++)
    {
        for(j=2;j<=i/2;j++)
        {
            flag=1;
            if(i%j==0)
                {
                    flag =0;
                    break;
                }
        }
        if(flag==1)
            return i;
    }
}
int main()
{
    int n;
    printf("Enter a number to find its next prime number : ");
    scanf("%d",&n);
    printf("\n\n%d is the next prime number.\n\n",NextPrime(n));
    return 0;
}
