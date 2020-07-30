/*
11111
0000
111
00
1
*/
#include<stdio.h>
void main()
{
  int i,j,n;
   printf("enter no of rows for pattern printing : ");
   scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    
     for(j=n;j>=i;j--)
	 {
	     if(i%2==0)
		 {
			 printf("0");
		 }
		 else{
			 printf("1");
		 }
	 }
	 printf("\n");
  }
}