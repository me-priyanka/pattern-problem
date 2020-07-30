/* Print table in traingle formate
1
2 4
3 6  9
4 8  12 16
5 10 15 20 25
*/
#include<stdio.h>
void main()
{
	int i,j;
	Printf("Enter thelast number of table upto which you print table(1 to 10)\n");
	scanf("%d",&i);
	for(i=1;i<=10;i++)
	{
		
		for(j=1;j<=i;j++)
		{
			printf("%d ",i*j);
			
		}
		printf("\n");
	}
}