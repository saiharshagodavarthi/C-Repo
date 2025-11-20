#include<stdio.h>
int main()
{
	int a[10][10],m,n;
	int i,j;
	printf("Enter no ofrows and cols of A:");
	scanf("%d %d",&m,&n);
	printf("Enter %d elements\n",m*n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d ",&a[i][j]);
		}
	}
	printf("matrix elements are:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
