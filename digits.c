#include<stdio.h>
int main()
{
	int n;
	printf("enter n value");
	scanf("%d",&n);
	if(n==0)
	{
		printf("zero\n");
	}
	else if(n==1)
	{
		printf("one\n");
	}
	else if(n==2)
	{
		printf("two\n");
	}
	else if(n==3)
	{
		printf("three\n");
	}
	else if(n==4)
	{
		printf("four\n");
	}
	else if(n==5)
	{
		printf("five\n");
	}
	else if(n>5)
	{
	printf("enter 0-5 numbers only\n");
	}
	printf("thank you\n");
	return 0;
}
