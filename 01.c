//TSRS function to calculate LCM of two numbers
#include<stdio.h>
int LCM (int a, int b)
{
    int max;
        max=a>b?a:b;
        while(1)
        {
            if(max%a==0 && max%b==0)
                return max;
            max++;
        }
}
int main()
{
    int num1, num2;
    printf("\nEnter any two numbers to calculate its LCM : ");
    scanf("%d%d",&num1,&num2);
    printf("\n\nLCM of %d and %d is : %d\n\n",num1,num2,LCM(num1,num2));
    return 0;
}
