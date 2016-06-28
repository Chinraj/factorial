#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,f=1;
   clrscr();
    printf("Integer number : ");
    scanf("%d",&a);
    for(b=1; b<=a; b++)
    {
   f=f*b;
    }
    printf("The Factorial number is %d = %d",a,f);
   getch();
}
