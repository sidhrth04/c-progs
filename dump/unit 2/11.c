#include<stdio.h>
int main()
{
    int age;
    printf("Please Enter your Age here:\n");
    scanf("%d",&age);
    (age>=18)?printf("You are eligible to Vote"):printf("You are not eligible to vote");
    return 0;
    
}