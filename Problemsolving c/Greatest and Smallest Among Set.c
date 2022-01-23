#include<stdio.h>
main()
{
int i,m,max=0,min,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&m);
if(i==1)
{
min=m;
continue;
}
if(m>max)
{
max=m;
}
else
{
if(m<min)
{
min=m;
}
}
}
printf("Greatest Number=%d\n",max);
printf("Smallest Number=%d",min);
}



