#include<stdio.h>
main()
{
	int a,b,big;
	scanf("%d%d",&a,&b);
	big=(a>b)?printf("%d is greater than %d",a,b):printf("%d is greater than %d",b,a);
}
