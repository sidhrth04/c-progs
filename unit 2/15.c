#include <stdio.h>
int main()
{
    int a;
    printf("Enter a Number:");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("Given Number is Positive");
    }
    else if (a == 0)
    {
        printf("Given Number is Zero");
    }
    else if (a < 0)
    {
        printf("Given Number is Negative");
    }
    return 0;
}