#include<stdio.h>
#include<string.h>
struct date
{
	int day;
	int month;
	int year;
};
typedef struct
{
	int id;
	char name[50];
	int mobile_number;
	struct date date1;
}
employee;
void f1(employee emp[])
{
int n,i,empmn,empid;
	char empname[50];
	printf("Enter number of employees.");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter employee ID.");
		scanf("%d",&empid);
		fflush(stdin);
		printf("Enter Employee Name.");
		gets(empname);
		printf("Enter employee Mobile Number.");
		scanf("%d",&empmn);
		printf("Enter Employee Date of Birth in DD/MM/YYYY format");
		scanf("%d",&emp[i].date1.day);
		scanf("%d",&emp[i].date1.month);
		scanf("%d",&emp[i].date1.year);
		emp[i].id=empid;
		strcpy(emp[i].name,empname);
		emp[i].mobile_number=empmn;
		if(emp[i].date1.year<2010 && emp[i].id%5==0)
		{
			printf("%s",emp[i].name);
			printf("%d",emp[i].mobile_number);
		}
	}
}
main()
{
	employee x=emp[];
	f1(x);
}
