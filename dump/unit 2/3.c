#include<stdio.h>
int main()
{
    int a,b,result,choice;
    printf("Enter first number\n");
    scanf("%d",&a);
    printf("Enter second number\n");
    scanf("%d",&b);
    printf("Enter 1 for addition or 2 for multiplication\n");
    scanf("%d",&choice);
    result=(choice==1)?a+b:(choice==2)?a*b:
    printf("Invalid");
    if(choice==1||choice==2)
    printf("The result is %d\n",result);
    return 0;

}