//function to find, sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5
#include<stdio.h>
int fact(int);
int sum()
{
    int sum=0,i;
    for(i=1;i<=5;i++)
    {
        sum=sum+fact(i)/i;
    }
    return sum;
}
int main()
{
    printf("\n\tSummation of series 1!/1+2!/2+3!/3+4!/4+5!/5 is %d.\n\n ",sum());
    return 0;
}
int fact (int n)
{
    int i,fact=1;
    if(n==0)
        return 1;
    else
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        return fact;
}
