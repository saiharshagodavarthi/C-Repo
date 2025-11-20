#include<stdio.h>
int main()
{
	int x,s,n;
	printf("enter n value\n");
	scanf("%d",&n);
	x=1;
	s=0;
	while(x<=n)
	{
		s=s+1;
		x=x+1;
	}
	printf("sum is %d",s);
	return 0;
}
