#include<stdio.h>
main()
{
     int i,m,sum=0;
     for(i=1;i<=6;i++)
     {
          scanf("%d",&m);
          sum=sum+m;
          }
     printf("Total Marks=%d\n",sum);
     double avg=sum/6;
     printf("Average Marks=%lf",avg);
	 }
