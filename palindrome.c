#include<stdio.h>
#include<conio.h>
void main()
{
int a,b=0,c,d;
clrscr();
scanf("%d",&a);
c=a;
while(a)
{
d=a%10;
a=a/10;
b=b*10+d;
}
if(c==b)
{
printf("Palindrome");
}
else
{
printf("Not a palindrome");
}
getch();
}
