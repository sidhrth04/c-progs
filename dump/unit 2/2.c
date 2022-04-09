#include<stdio.h>
int main()
{
    int age,height;
    printf("Enter Age of the Candidate:\n");
    scanf("%d",&age);
    printf("Enter height of the Candidate:\n");
    scanf("%d",&height);
    if ((age>=18)&&(height>=5))
    printf("The Candidate is Selected");
    else
    printf("Sorry,Candidate not Selected");
    return 0;
}