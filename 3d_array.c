#include <stdio.h>

int main() 
{
	int i,j,k;
    // Declare and initialize a 3x3x3 3D array
    int array[3][3][3] = {
        { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} },
        { {10, 11, 12}, {13, 14, 15}, {16, 17, 18} },
        { {19, 20, 21}, {22, 23, 24}, {25, 26, 27} }
    };

    // Accessing elements of the 3D array
    for (i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            for ( k = 0; k < 3; k++) {
                printf("array[%d][%d][%d] = %d\n", i, j, k, array[i][j][k]);
            }
        }
    }

    return 0;
}

