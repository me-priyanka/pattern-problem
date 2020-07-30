/*

1
21
321
4321
54321
*/

#include<stdio.h>
void main()
{
   int i,j,n;
    printf("enter no of rows for pattern printing: ");
    scanf("%d",&n);
   for(i=1;i<=n;i++)
   {   
	   for(j=i;j>=1;j--)
	   {
	      printf("%d ",j);
	   }
	 printf("\n");  
	 }
}