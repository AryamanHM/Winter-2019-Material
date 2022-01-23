#include<stdio.h>
main()
{
int n,x,count=0,d;
scanf("%d",&n);
x=n;
while(x!=0)
{
d=x%10;
printf("%d \n",d);
count++;
x=x/10;
}
printf("Number of digits=%d",count);
}


