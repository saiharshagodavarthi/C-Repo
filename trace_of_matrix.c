#include<stdio.h>
int main()
{
	int a[10][10],m,n,s;
	int i,j;
	printf("Enter no ofrows and cols of A:");
	scanf("%d %d",&m,&n);
	if(m==n)
	{
		printf("Enter %d elements\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{	
				scanf("%d",a[i][j]);			
			}
		}
		printf("Enter %d elements\n",m*n);
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{	
				printf("%d",a[i][j]);			
			}
		}
		printf("Enter %d elements \n");
		//trace logic
	s=0;	
	for(i=0;i<m;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(i==j)
				s=s+a[i][j];
		}
			printf("%d",s);
		}
	}
	else 
	{
		printf("please enter square matrix\n");
	}
	return 0;
}
