#include<stdio.h>
double arithmetic(char choice,int a,int b)
{
	double ans;
	switch(choice)
	{
	
		case '+':
			ans=a+b;
			break;
		case '-':
			ans=a-b;
			break;
		case '*':
			ans=a*b;
			break;
		case '/':
			a=(double)a;
			b=(double)b;
			ans=a/b;
			break;
		case '%':
			ans=a%b;
			break;
		default:
			ans=0.0;
			printf("\n Invalid case");
    }
    return ans;
}
main()
{
	int a,b;
	double ans;
	char choice;
	printf("Enter choice.\n");
	scanf("%c",&choice);
	printf("Enter 1st number.\n");
	scanf("%d",&a);
	printf("Enter 2nd number.\n");
	scanf("%d",&b);
	printf("Your answer is->");
	ans=arithmetic(choice,a,b);
	printf("%lf",ans);
}
