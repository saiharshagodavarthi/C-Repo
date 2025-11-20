#include<stdio.h>
int main() 
{
    int units;
    float bill_amount;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    if (units <= 100) 
	{
        bill_amount = units * 1.5;
    } 
	else if (units <= 200) 
	{
        bill_amount = 100 * 1.5 + (units - 100) * 2.0;
    } 
	else if (units <= 300) 
	{
        bill_amount = 100 * 1.5 + 100 * 2.0 + (units - 200) * 2.5;
    }
	else 
	{
        bill_amount = 100 * 1.5 + 100 * 2.0 + 100 * 2.5 + (units - 300) * 3.0;
    }
    printf("Electricity Bill: Rs. %.2f\n", bill_amount);
    return 0;
}

