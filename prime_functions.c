#include<stdio.h>
int prime(int);
int main()
{
	int a,b,c;
	printf("Enter the number:");
	scanf("%d",&a);
	b=prime(a);
	if(b==2)
	{
		printf("%d is a prime number",a);
	}
	else
	{
		printf("%d is not a prime number",a);
	}
	return 0;
}
int prime(int x)
{
	int i,z=0;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			z++;
		}
	}
	return z;
}
