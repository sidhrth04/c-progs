// Program for bitwise operator
#include <stdio.h>

int main() {
    unsigned int a = 60; /*60 = 0011 1100 */
    unsigned int b = 13; /*13 = 0000 1101 */
    int c = 0; 
    c = a & b ;/* 12 = 0000 1100 */
    printf("line 1 - value of c is %d\n", c );
    c= a|b ; /*61 = 0011 1101*/ 
    printf("line 2 - value of c is %d\n",c);
    c = a ^ b ; /* 49 = 0011 0001 */ 
    printf("line 3 - value of c is %d\n", c);
    c = ~a;/* -61 = 1100 0011*/
    printf("line 4 - value of c is %d\n",c);
    c = a<<2;/*240 = 1111 0000 */ 
    printf("line 5 - value of c is %d\n",c);
    c = a >>2; /* 15 = 0000 1111 */ 
    printf("line 6 - value of c is %d\n",c);
    
    return 0;
} 