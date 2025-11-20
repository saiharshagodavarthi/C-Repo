#include<stdio.h>
int main()
{
	int n,rem;
	printf("enter n value");
	scanf("%d",n);
	rem=n/2;
	if(rem==0)
	{
		printf("%d is even",n);
	}
	else
	{
		printf("%d is odd",n);
	}
	return 0;
}
