#include<stdio.h>
int total(int[],int);
void main()
{
int a[10],n,sum,i; 
printf("Enter n\n"); 
scanf("%d",&n); 
for(i=0;i<n;i++)
scanf("%d",&a[i]); 
sum=total(a,n); 
printf("Sum=%d",sum)
;
}

int total(int a[],int n)
{
int sum=0,i;
for(i=0;i<n;i++)
sum=sum+a[i]; 
return sum;}
void displayNumbers(int num[2][2])
{
// Instead of the above line,
// void displayNumbers(int num[][2]) is also valid
int i, j; 
printf("Displaying:\n"); 
for (i = 0; i < 2; ++i)
for (j = 0; j < 2; ++j) 
printf("%d\n", num[i][j]);
}
