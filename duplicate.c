#include <stdio.h>
int main() 
{
 	int array[] = {1, 2, 3, 2, 4, 3, 5, 1}; 
 	int size = sizeof(array) / sizeof(array[0]);  
 	int i,j;
    printf("Duplicate elements in the array are: ");
    for (i = 0; i < size; i++) 
	{
        for (j = i + 1; j < size; j++) 
		{
            if (array[i] == array[j]) 
			{
                printf("%d ", array[i]);
                break; 
            }
        }
    }
    printf("\n");
    return 0;
}

