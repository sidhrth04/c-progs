#include<stdio.h>
int main()
{
    int i;
    int n=5;
    int arr[5]=10,20,30,40,50;
    scanf("%d",&n);
    printf("Enter the elements of Array\n");
    for(i=0;i,n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The Elements of the Array are\n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}