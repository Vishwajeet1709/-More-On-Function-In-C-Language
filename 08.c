//TSRN function to print pascal triangle
#include<stdio.h>
int fact (int);
void pascal (int r)
{
    int i;
    while(i!=r)
    {
        if(i<=r/2)
        {
            printf(" %d",fact(r-1)/fact(r-i)*fact(i));
        }
        else
        {
            int j=i,k=1;
            j=j-k;
            printf(" %d",fact(r-1)/fact(r-j)*fact(j));
            k++;
        }
        i++;
    }
}
int main()
{
    int row;
    printf("Enter the row number in pascal triangle to print : ");
    scanf("%d",&row);
    pascal(row);
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
