#include<stdio.h>
main()
{
        int i,a[10],evencount=0,oddcount=0;
        printf("Enter 10 values in Array\n");
        for(i=0;i<10;i++)
        {
              scanf("%d",&a[i]);
          }
          for(i=0;i<10;i++)
          {
               if(a[i]%2==0)
                   {
                       evencount++;
                       printf(",%d",a[i]);
                   }
               }
           printf("\nNumber of even digits in array=%d \n",evencount);    
           for(i=0;i<10;i++)
		   {
		        if(a[i]%2!=0)
				{
				       oddcount++;
					   printf(",%d",a[i]);
				}
			}
			 printf("\nNumber of odd digits in array=%d\n",oddcount);
		}
