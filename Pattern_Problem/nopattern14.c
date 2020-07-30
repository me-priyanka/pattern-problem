/*
1
2 4
1 3 5
2 4 6 8
1 3 5 7 9
*/
#include<stdio.h>
void main()
{
  int i,j,count=0,n;
  printf("enter no of rows for pattern printing: ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
	   if(i%2==0)
	   {
		   count=2;
	   }
	   else{
		   count=1;
	   }
	   for(j=1;j<(i+1);j++)
	   {
		   printf("%d ",count);
		   count=count+2;
	   }
	   printf("\n");
   }
 }
  