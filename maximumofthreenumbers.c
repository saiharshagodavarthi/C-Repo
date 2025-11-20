#include<stdio.h>;
int main()
{
	int a,b,c;
	printf("entrer a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b)
	{
		if (a>=c)
	printf("largest number is %d",a);
	else
	printf("largest number is %d",c);
}
return 0;	
}

