#include <stdio.h>
#include <string.h>
typedef struct
{
	char title[50];
	int no_of_pages;
	char author[50];
}book;
void main(book book1)
{
	book1.title="C Programming";
	book1.author="John";
	book1.no_of_pages=300;
	
}
