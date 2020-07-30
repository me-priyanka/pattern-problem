/*
5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5
*/

#include<stdio.h>
void main()
{
  int low=0,n,i,j,n1,a[100][100]={0};
  printf("Enter the number\n");
  scanf("%d",&n);
  n1=n;
  int total_no= n*2;
  int top = total_no-2;
  for(i=0;i<n1;i++,low++,top--,n--)
  {
	  for(j=low;j<=top;j++)
	  {
		  a[i][j]=n;
	  }
	  for(j=low+1;j<=top;j++)
	  {
		 a[j][top]=n; 
	  }
	  for(j=top-1;j>=low;j--)
	  {
		  a[top][j]=n;
	  }
	  for(j=top-1;j>low;j--)
	  {
		  a[j][low]=n;
		  
	  }
	 
  }
 for(i=0;i<total_no-1;i++)
  {
	  printf("\n");
	  for(j=0;j<total_no-1;j++)
	  {
		  printf("%3d ",a[i][j]);
		  
	  }
	  
  }
}