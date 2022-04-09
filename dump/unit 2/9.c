#include<stdio.h>
int main()
{
    int p,q,x,y;
    printf("Enter the value of x\n");
    scanf("%d",&x);
    printf("Enter the valiue of y\n");
    scanf("%d",&y);
    printf("x=%d\ny=%d\n",x,y);
    p=x++;
    q=y++;
    printf("x=%d y=%d\n",x,y);
    printf("p=%d q=%d\n",p,q);
    p=--x;
    q=--y;
    printf("x=%d y=%d\n",x,y);
    printf("p=%d q=%d\n",p,q);
    return 0;

}