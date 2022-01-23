#include<stdio.h>
main()
{
int a,b,c,max=0;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a>b && a>c)
{
printf("%d",a);
}
else
{
if(b>a && b>c)
{
printf("%d",b);
}
else
{
if(c>a && c>b)
{
printf("%d",c);
}
}
}
}

