/*if n=4
1 3 5 7
3 5 7
5 7 
7
*/
#include<stdio.h>
void main()
{
   int i,j,count=1,n;
   printf("enter no of rows for pattern printing :");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {   
     for(j=i+1;j<=n;j++)
	 {
		 printf("%d ",(2*j)-1);
	 }
	   printf("\n");  
	 }
}
