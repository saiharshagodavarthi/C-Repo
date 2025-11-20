#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],m,n,p,q;
	int c[10][10],i,j;
	printf("Enter rows & cols of matrix A:");
	scanf("%d%d",&m,&n);
	printf("Enter rows & cols of matrix B:");
	scanf("%d%d",&p,&q);
	if(m==p && n==q)
	{
			printf("enter %d elements into A\n",m*n);
			for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);			
			}
			
		}
			printf("enter %d elements into B\n",m*n);
			for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				scanf("%d",&b[i][j]);			
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				c[i][j]=a[i][j]+b[i][j];		
			}
		}
		printf("Matrix Addition elements are:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d ",c[i][i]);
			}
			printf("\n");
		}
	}
		else
		{
			printf("Matrix Add not possible..");
		}
		return 0;
	
}
