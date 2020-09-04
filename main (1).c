/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,sum=0,sum1=0,sum2=0;
    scanf("%d",&n);
    while(n!=0){
        int m=n%10;
        sum=sum+m;
        n=n/10;
    }
    if(sum>=10){
        while(sum!=0){
            int x=sum%10;
            sum1=sum1+x;
            sum=sum/10;
        }
    }
    if(sum1>=10){
        while(sum1!=0){
            int y=sum1%10;
            sum2=sum2+y;
            sum1=sum1/10;
        }
        printf("%d",sum2);
    }else{
        printf("%d",sum1);
    }
    
    
    return 0;
}
