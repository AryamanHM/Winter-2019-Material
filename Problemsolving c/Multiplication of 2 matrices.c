#include<stdio.h>
int main()
{
        int r1,c1,r2,c2,i,j,k;
        printf("Enter Number of rows in matrix 1 \n");
        scanf("%d",&r1);
        printf("Enter Number of columns in matrix 1 \n");
        scanf("%d",&c1);
        printf("Enter Number of rows in matrix 2 \n");
        scanf("%d",&r2);
        printf("Enter Number of columns in matrix 2 \n");
        scanf("%d",&c2);
        if(c1!=r2)
        {   
            printf("Condition for multiplication not followed. \n");
			return 0;
		}
		int m1[r1][c1],m2[r2][c2],a[r1][c2];
		for(i=0;i<r1;i++)
		     {
		          for(j=0;j<c2;j++)
		          {
				     a[i][j]=0;
				 }
			}
		printf("Enter elements in matrix 1 \n");	
		for(i=0;i<r1;i++)
		   {
		       for(j=0;j<c1;j++)
		            {
		                scanf("%d",&m1[i][j]);
		            }
		        }
		printf("Enter elements in matrix 2 \n");      
		 for(i=0;i<r2;i++)
		   {
		       for(j=0;j<c2;j++)
		            {
		                scanf("%d",&m2[i][j]);
		            }
		        }       
		for(i=0;i<r1;i++)
		     {
		          for(j=0;j<c2;j++)
		          {
		               for(k=0;k<c1;k++)
		                   {
		                       a[i][j]=a[i][j]+(m1[i][k]*m2[k][j]);
		                   }
		               }
		           }
		 for(i=0;i<r1;i++)
		 {  
		      for(j=0;j<c2;j++)
			       {
				       printf("%d \t",a[i][j]);
				}
				printf("\n");
			}
			return 1;
		}
