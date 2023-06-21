#include<stdio.h>
#include<conio.h>
void main()
{
   clrscr();
   int a,b,c;
   printf("enter value A=");
   scanf("%d",&a);
   printf("enter value B=");
   scanf("%d",&b);
   c=a;
   a=b;
   b=c;
   printf("swiping value of A=%d",a);
   printf("swiping value of B=%d",b);
   getch();


}