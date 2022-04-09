#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the two values\n");
    scanf("%d%d",&a,&b);
    printf("a>b is %d\n",(a>b));
    printf("a<b is %d\n",(a<b));
    printf("a>=b is %d\n",(a>=b));
    printf("a<=b is %d\n",(a<=b));
    printf("a==b is %d\n",(a==b));
    return 0;
}