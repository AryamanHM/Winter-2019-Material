#include<stdio.h>
main()
{
int n,i,j,m,temp;
printf("Enter number of numbers to be sorted:");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&m);
a[i]=m;
}
for (i = 0; i < n-1; i++)      
      for (j = 0; j < n-i-1; j++)  
        if (a[j] > a[j+1])  
            {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}

