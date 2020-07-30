#include<stdio.h>
void main()
{
	int i,j,count,k,space,n;
	printf("enter no of rows for pattern printing: ");
    scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		count=i;
		for(space=1;space<=2*(n-i);space++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d ",count++);
		}
		count=count-2;
		for(k=2;k<=i;k++)
		{
			printf("%d ",count--);
		}
		printf("\n");
	}
}