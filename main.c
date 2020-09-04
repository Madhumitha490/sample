/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int x,y;
   printf("Enter x and y"); 
   scanf("%d\n%d",&x,&y);
   printf("Before swapping \nx=%d y=%d",x,y);
   x=x+y;
   y=x-y;
   x=x-y;
   printf("\nAfter swapping \nx=%d y=%d",x,y);
    return 0;
}
