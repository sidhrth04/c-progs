#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("\nEnter the value for n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("The sum of n Numbers is:%d",sum);
    return 0;
}