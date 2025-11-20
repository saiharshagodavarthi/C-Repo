#include<stdio.h>
int main()
{
	int n,s=0,r,t;
	printf("enter n value:");
	scanf("%d",&n);
	t=n;
	while(t>0)
	{
		r=t%10;
		s=s+r;
		t=t/10;
	}
	printf("sum of digits of %d is %d",n,s);
	return 0;
}
