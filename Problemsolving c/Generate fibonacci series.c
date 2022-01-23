#include<stdio.h>
void fibonacci_series(int n)
{
	int a,b,c,i;
	a=0;
	b=1;
	printf("%d,%d,",a,b);
	for(i=2;i<=n;i++)
	{
		c=a+b;
		printf("%d,",c);
		a=b;
		b=c;
	}
}
main()
{
	int n;
	printf("Enter number of terms in fibonacci series-");
	scanf("%d",&n);
	printf("\nFibonacci Series-");
	fibonacci_series(n);
}
