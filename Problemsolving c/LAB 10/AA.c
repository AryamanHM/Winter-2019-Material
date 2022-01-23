#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1,capacity,*ptr;
void enqueue(int ar[],int x)
{
	if(front==capacity-1)
	{
		printf("\nQueue is Full\n");
		return;
	}
	else
	{
		if (front==-1)
		{
			front=0;
		}
		rear++;
		ar[rear]=x;
	}
}
void dequeue(int ar[])
{
	int i;
	if(front==-1||front>rear)
	{
		printf("\nQueue is Empty\n");
		return;
	}
	else
	{
		for(i=0;i<rear-1;i++)
		{
			ar[i]=ar[i+1];
		}
		rear--;
	}
}
int front_element(int ar[])
{
	return ar[front];
}
int rear_element(int ar[])
{
	return ar[rear];
}
void init()
{
	int n,i;
	printf("Enter number of elements that are joining the queue.\n");
	scanf("%d",&n);
	capacity=n;
	ptr=(int*)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf("Memory not Allocated.\n");
		exit(0);
	}
	else
	{
		printf("Memory succesfully allocated using calloc.\n");
	}
}
main()
{
	init();
	int element,x,i,choice;
	char user='Y';
	while(user=='Y'||user=='y')
	{
	printf("Enter your choice\n1-Enqueue;\n2-Dequeue;\n3-Display front element;\n4-Display rear element. \n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter an element to be added to queue.\n");
			scanf("%d",&x);
			enqueue(ptr,x);
			break;
		case 2:
			printf("Deleting an element....\n");
			dequeue(ptr);
			printf("Element deleted\n");
			break;
		case 3:
			printf("Front element is-\n");
			element=front_element(ptr);
			printf("%d\n",element);
			break;
		case 4:
			printf("Rear Element is-\n");
			element=rear_element(ptr);
			printf("%d\n",element);
			break;
		default:
			printf("Invalid Operation called.\n");
		}
	printf("Do you want to perform more operations on queue?Y/N \n");
	scanf(" %c", &user);
}
	for(i=0;i<capacity;i++)
	{
		printf("%d,",ptr[i]);
	}
	}

	

       
       

