#include<stdio.h>
int a[10]={0,0,0,0,0,0,0,0,0,0};
void insert_an_element()
{
	char choice='Y';
	int n,pos,i,count=0;
	while(choice=='Y')
	{
		printf("\nEnter NUMBER which you want to enter->");
		scanf("%d",&n);
		printf("\nEnter position for insertion of element->");
		scanf("%d",&pos);
		if(pos>=10)
		{
			printf("\nIndex is out of bounds.Try again.");
		}
		else
		{
			if (count<=10)
			{
				a[pos]=n;
			    printf("\nInsertion of element succesful.");
			    count++;
			}
			else
			{
				printf("Array is full Now.");
				break;
			}
			
		}
		printf("\nDo you want to insert more elements.Y for YES!,N for N0!");
		scanf(" %c",&choice);
	}
	for(i=0;i<10;i++)
			{
				printf("%d,",a[i]);
			}
}
void delete_an_element()
{
	
	char choice='Y';
	int n,pos,i;
	while(choice=='Y')
	{
		printf("\nEnter position for deletion of element->");
		scanf("%d",&pos);
		if(pos>=10)
		{
			printf("\nIndex is out of bounds.Try again.");
		}
		else
		{
			a[pos]=0;
			printf("\nDeletion of element succesful.");
			for(i=0;i<10;i++)
			{
				printf("%d,",a[i]);
			}
		}
		printf("\nDo you want to delete more elements.Y for YES!,N for N0!");
		scanf(" %c",&choice);
	}
}
void find_an_element()
{
	int pos,x,i;
	printf("\nEnter position of element which you want to find->");
	scanf("%d",&pos);
	x=a[pos];
	printf("\nElement at position %d is %d\n",pos,x);
	for(i=0;i<10;i++)
			{
				printf("%d,",a[i]);
			}
}
main()
{
	int choice;
	char overall_choice='Y';
	while(overall_choice=='Y')
	{
		printf("What do you want to do with array.Enter 1 for Insertion,2 for Deletion and 3 to Find an element.\n");
	    scanf("%d",&choice);
			if (choice==1)
	{
		insert_an_element();
	}
	else{
		if (choice==2)
		{
			delete_an_element();
		}
		else
	{
		find_an_element();
	}
	}
	printf("\nDo you wish to continue inserting,deleting and finding?");
	scanf(" %c",&overall_choice);
	}
}


