/*
5
44
333
2222
11111
*/
#include<stdio.h>
void main()
{
   int i,j,n;
   printf("enter no of rows for pattern printing: ");
   scanf("%d",&n);
   for(i=n;i>=1;i--)
   {   
	   for(j=n;j>=i;j--)
	   {
	      printf("%d ",i);
	   }
	 printf("\n");  
	 }
}
