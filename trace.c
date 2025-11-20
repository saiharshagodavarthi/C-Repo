#include<stdio.h>
int main()
{
    int n,i,j,matrix[n][n];
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);
    printf("Enter the elements of the matrix:\n");
    for (i=0;i<n;++i)
	{
        for (j=0;j<n;++j) 
		{ 
            scanf("%d", &matrix[i][j]);
        }
    }
    int trace = 0;
    for (i=0;i<n;++i)
	{
        trace+=matrix[i][i];
    }
    printf("The trace of the matrix is: %d\n", trace);
    
    return 0;
}

