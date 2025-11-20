#include<stdio.h>
int main()
{
	int units;
	float amount;
	printf("enter number of units:");
	scanf("%f",&units);
	if(units>=1 && units<=30)
	{
		amount=units*2.5;
	}
	else if(units>=31 && units<=70)
	{
		amount=30*2.5+(units-30)*4.00;
	}
	else if(units>=71 && units<=150)
	{
		amount=75+160+(units-150)*6.00;
	}
	else if(units>=151 && units<=250)
	{
		amount=75+160+480+(units-250)*8.00;
	}
	else if(units>=251)
	{
		amount=75+160+480+800+(units-250)*10.00;
	}
	else
	{
		printf("please enter positive values");
	}
	printf("amount to be paid is %.2f",amount);
	return 0;
}
