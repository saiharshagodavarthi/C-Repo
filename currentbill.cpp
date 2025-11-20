#include<stdio.h>
int main()
{
	int a,b,c,d,cv;
	float total,gst;
	printf("enter current volts");
	scanf("%d",cv);
	if(cv<50)
	{
		a=cv*2.5;
	}
	else{
	a=50*2.5;
	cv=cv-50;
	}
	if(cv<50)
	{
		cv*2.5;
	}
	else{
	a=50*2.5;
	cv=cv-50;
	}if(cv<50)
	{
		a=cv*2.5;
	}
	else{
	a=50*2.5;
	cv=cv-50;
	}if(cv<50)
	{
		a=cv*2.5;
	}
	else{
	a=50*2.5;
	cv=cv-50;
	}if(cv<50)
	{
		a=cv*2.5;
	}
	else{
	a=50*2.5;
	cv=cv-50;
	}if(cv<50)
	{
		a=cv*2.5;
	}
	else{
	a=50*2.5;
	cv=cv-50;
	}
	total=a+b+c+d;
	gst=(float)total*0.2;
	total+=gst;
	printf("total current bill is %f",total);
	return 0;
}
