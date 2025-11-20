#include<stdio.h>
int main()
{
	int n;
	printf("enter n value");
	scanf("%d",&n);
	if(n>=18)
	{
		printf("eligible for voting\n");
	}
	else if(n<=18)
	{
		printf("not eligible for voting\n");
	}
		printf("thank you!\n");
		printf("bye");	
	return 0;
}
