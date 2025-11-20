#include<stdio.h>
int main()
{
	int s,area,perimeter;
	scanf("%d %d %d",&s,&area,&perimeter);
	printf("%d",area(s*s));
	printf("%d",perimeter(4*s));
}
