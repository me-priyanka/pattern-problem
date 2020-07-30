/*
1
01
101
0101
*/
#include<stdio.h>
void main()
{
   int i,j,count=0,n;
   printf("enter no of rows for pattern printing: ");
   scanf("%d",&n);
   for(i=0;i<=4;i++)
   {
     if(i%2==0)
	 {
		 count=1;
	 }
	 else{
		 count=0;
	 }
	 for(j=1;j<=(i+1);j++){
		 printf("%d ",count);
		 if(count==0)
		 {
			 count++;
		 }
		 else{
			 count--;
		 }
	 }
	 printf("\n");
   }
}