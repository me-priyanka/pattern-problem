/*
1
2*2
3*3*3
4*4*4*4
4*4*4*4
3*3*3
2*2
1
*/
#include<stdio.h>
void main()
{
   int i,j,p,n;
  
  printf("enter no of rows for pattern printing: ");
   scanf("%d",&n);
    if(n%2!=0){
      n=n+1 ;
       
   }
   
   for(i=1;i<=n;i++)
   {   
     if(i<=(n/2)) 
	 {
	   for(j=1;j<=i;j++)
	   {
		   if(i==j){
			   printf("%d",i);  
		   }
		   else{
	      printf("%d*",i);
		   }
	   }
	 }
      else
	  {
       p=n+1-i;
	   for(j=1;j<=p;j++)
	    {
		   if(p==j){
			   printf("%d",p);  
		   }
		   else{
	      printf("%d*",p);
		   }
	     }
	  }
	 printf("\n");  
	 }
}