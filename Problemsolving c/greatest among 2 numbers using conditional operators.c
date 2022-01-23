#include<stdio.h>
main()
{
	int a,b,big;
	scanf("%d%d",&a,&b);
	big=(a>b)?a:b;
	if(big==a)
	{
		printf("%d is greater than %d",a,b);
	}
	else
	{
		printf("%d is greater than %d",b,a);
	}
}
