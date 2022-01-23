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

