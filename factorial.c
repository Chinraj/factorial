#include<stdio.h>
void main()
{
   int a,b,f=1;
   clrscr();
    printf("Enter a number : ");
    scanf("%d",&a);
    for(b=1; b<=a; b++)
    {
   f=f*b;
    }
    printf("Factorial of the number %d = %d",a,f);
   getch();
}
