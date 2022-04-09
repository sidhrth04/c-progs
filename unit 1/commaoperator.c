// Program for comma operator
#include<stdio.h>
int main(){
    int i,j;
    i=(j=10,j+20);
    printf("i=%d\n j=%d\n",i,j);
    return 0;
}
