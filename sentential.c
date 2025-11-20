#include <stdio.h>
int main() 
{
    char s1[0];
    int i;
    scanf("%[^\n]",s1);
        if (s1[0] >= 'a' && s1[0] <= 'z') 
		{
            s1[0] = s1[0] -32;
        }
	printf("Sentential string is %s",s1);
	return 0;
}
