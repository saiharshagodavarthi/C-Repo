#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],m,n,p,q;
	int c[10][10],i,j,k;
	printf("Enter rows & cols of matrix A:");
	scanf("%d%d",&m,&n);
	printf("Enter rows & cols of matrix B:");
	scanf("%d%d",&p,&q);
	if(n==p)
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
		//logic for matrix multiplication
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				c[i][j]=0;
				for(k=0;k<n;k++)		
			{
			c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
			}
		}
		printf("Matrix Multiplication elements are:\n");
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
			printf("Matrix multiplication not possible..");
		}
		return 0;
	
}
