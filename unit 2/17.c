#include<stdio.h>
int main()
{
    int square,i,n,fact=1,choice;
    printf("\nEnter Any Number:");
    scanf("%d",&n);
    printf("1.Square\n");
    printf("2.Factorial\n");
    printf("3.Find Odd or Even\n");
    printf("4.Exit\n");
    printf("Enter your Choice\n");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        square=n*n;
        printf("The Square of the given number is %d\n",square);
        break;
        case 2:
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        printf("The Factorial of a given number is%d\n",fact);
        break;
        switch(n%2)
        {
            case 0:
            printf("Given Number is Odd\n");

        }
        case 3:
        exit(0);
        default:
        printf("Invalid Choice.Please try again\n");

        
    }
    return 0;
}