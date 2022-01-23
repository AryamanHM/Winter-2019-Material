#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
struct reservation
{
	char aadhar[12];
	char voter_id[9];
};
int main()
{
	struct reservation *ptr;
	char votesub1[100],votesub2[100];
	int c=0,i,j;
	ptr=(struct reservation*)calloc(30,sizeof(struct reservation));
	for(i=0;i<30;++i)
	{
		printf("Enter aadhar card number and voter id of person.");
		scanf("%s%s",&(ptr+i)->aadhar,&(ptr+i)->voter_id);
		for(j=0;j<9;j++)
		{
			if(j<3)
			{
				votesub1[j]=votesub1[j]+((ptr+i)->voter_id)[j];
			}
			if()
		}
		if(strlen((ptr+i)->aadhar)==12 && isdigit((ptr+i)->aadhar)==true && isdigit(votesub2)==true && isalpha(votesub1)==true)
		{
			printf("Registration allowed.");
		}
		else
		{
			printf("%s\n%s",votesub1,votesub2);
			printf("Registration is not allowed.");
		}
		
		
	}
	return 0;
}
	
	
	
			
			
		
	
