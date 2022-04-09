#include<stdio.h>
int main()
{
    int a,b,max;
    printf("Enter a and b:");
    scanf("%d%d",&a,&b);
    max=a>b?a:b;printf("Largest of two numbers=%d\n",max);
    return 0;
}