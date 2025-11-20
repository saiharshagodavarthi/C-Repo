#include<stdio.h>
int main()
{
	int i,n,s;
	printf("enter n value:");
	scanf("%d",n);
	for(i=1;i<=n;i++);
	{
		printf(" \n");
		for(s=1;s<=n-i;s++)
		{
			printf("_");
		}
		return 0;
	}
}
