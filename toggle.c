#include <stdio.h>
int main() 
{
    char s1[100];
    int i;
    scanf("%[^\n]",s1);
    // Convert each character to uppercase
    for (i = 0; s1[i] != '\0'; i++) 
	{
        if (s1[i] >= 'a' && s1[i] <= 'z') 
		{
            s1[i] = s1[i] -32;
        }
        else if(s1[i] >= 'A' && s1[i] <= 'Z')
        {
        	s1[i] = s1[i] +32;
		}
    }
    printf("Toggle string is %s",s1);
    return 0;
}
