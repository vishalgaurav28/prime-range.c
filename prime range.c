/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//prime number in a given range//
#include <stdio.h>
void main()
{
    int a,b ,i,j,flag;
    printf("enter the range \n");
    scanf("%d %d",&a,&b);
    printf("prime number in a given range are\n");
    for(i=a;i<=b;i++)
    {
        flag=0;
        for(j=2;j<=i/2;j++)
        if(i%j==0)
        {flag=1;break;}
        if(flag==0)
        {
            
            printf("\n %d",i);
        }
        }
    }

