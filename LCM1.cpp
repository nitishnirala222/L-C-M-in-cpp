#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,L;
printf("enter two numbers respectively : ");
scanf("%d%d",&a,&b);
for(L=1;L<=a*b;L++)
if(L%a==0 && L%b==0)
break;
printf("LCM of these two numbers is %d",L);
getch();
}
