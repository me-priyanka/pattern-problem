/*
        4
     4    3
   4    3   2
  4  3   2    1 
  */
#include<stdio.h>
void main()
{
  int i,j,count,k,n; 
  printf("enter no of rows for pattern printing : ");
  scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
	 count=n;
	 for(j=n;j>i;j--)
	 {
		  printf(" ");
	 }
	 for(k=1;k<=i;k++)
	 {
		 printf(" %d",count--);
	 }
	 printf("\n");
 }
	  
	  
}