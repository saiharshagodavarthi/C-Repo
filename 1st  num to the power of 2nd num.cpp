#include<stdio.h>
int main(void)
{
	int n,sum=0;
	printf("enter your number:");
	scanf("%d",&n);
	 printf("sum of numbers from 1 to %d is:",n);
	for(;n;n--)
	  sum=sum+n;
	  printf("%d\n",sum);
	  return 0;
}
