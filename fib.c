#include <stdio.h>
int main() 
{
    int n, i;
    int a = 0, b = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("The Fibonacci series up to %d terms is:\n", n);
    for (i = 0; i < n; i++) 
	{
        if (i == 0) 
		{
            printf("%d ", a);
        } else if (i == 1) 
		{
            printf("%d ", b);
        } 
		else 
		{
            next = a + b;
            a = b;
            b = next;
            printf("%d ", next);
        }
    }
    printf("\n");
    return 0;
}

