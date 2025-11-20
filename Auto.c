#include<stdio.h>
void display();
void display()
{
	int x=10;
	x++;
	printf("x=%d",x);
}
int main()
{
	auto int y=5;
	display();
	printf("y=%d",y);
	display();
	display();
	return 0;
	
}
