#include<stdio.h>
int main()
{
	double num,root;
	printf("enter an integer:");
	scanf("%f",&num);
	root=square(num);
	printf("/n square root of %2f is %2f",num,root);
	return 0;
}
