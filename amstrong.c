#include<stdio.h>
#include<math.h>
int main()
{
	int a,i,n,sum=0;
	printf("Enter n value: ");
	scanf("%d",&n);
	a=n;
	while(n!=0)
	{
		i=n%10;
		sum=sum+pow(i,3);
		n=n/10;
	}
	if(a==sum)
	{
		printf("num is amstrong");
	}
	else
	{
		printf("num is not a amstrong");
	}
	return 0;
}
