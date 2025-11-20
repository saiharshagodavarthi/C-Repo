#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float r1,r2,disc;
	printf("a*x*x+b*x+c=0\n");
	printf("enter values a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	disc=b*b-4*a*c;
	if(disc==0)
	printf("roots are real");
	else if(disc>0)
	printf("roots are real&distint");
	else
	printf("roots are imaginary");
	if(disc==0)
	{
		r1=-b/(2*a);
		r2=-b/(2*a);
		printf("%.2f,%.2f",r1,r2);
	}
	else if(disc>0)
	{
		r1=(-b+sqrt(disc))/(2*a);
		r2=(-b-sqrt(disc))/(2*a);
		printf("%.2f,%.2f",r1,r2);
	}
	else if(disc<0) 
	{
		printf("roots are imaginary");
	}
	return 0;
}
