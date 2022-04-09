#include<stdio.h>
int main()
{
    int a,b,choice;
    printf("\nEnter Two Numbers:");
    scanf("%d%d",&a,&b);
    printf("\nEnter 1 for Addition");
    printf("\nEnter 2 for Substraction");
    printf("\nEnter 3 for Multiplication");
    printf("\nEnter 4 for Division");
    printf("\nEnter your choice:");
    scanf(" %d",&choice);
    switch(choice)
    {
        case 1:
        printf("Sum is: %d",a+b);
        break;
        case 2:
        printf("Difference is:%d",a-b);
        break;
        case 3:
        printf("Multiplication is: %d",a*b);
        break;
        case 4:
        printf("Division is: %d",a/b);
        break;
        default:
        printf("Invalid Choice");
        break;
    }
    return 0;
}
