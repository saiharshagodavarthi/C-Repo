#include<stdio.h>
int main()
{
	int i,sum=1;
	scanf("%d",&i);
	for(i;i>0;i--)
	{
		sum=sum*i;
	}
	printf("%d",sum);
}
