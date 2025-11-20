#include <stdio.h>
int isPalindrome(char str[]) 
{
    int start = 0;
    int end = 0;
    // Find the end of the string
    while (str[end]!= '\0') 
	{
        end++;
    }
    end--; // Adjust to point to the last character

    // Compare characters from start and end
    while (start < end) 
	{
        if (str[start] != str[end]) 
		{
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    return 1; // It's a palindrome
}
int main() 
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline character if present
    int len = 0;
    while (str[len] != '\0') 
	{
        if (str[len] == '\n') 
		{
            str[len] = '\0';
        }
        len++;
    }
    if (isPalindrome(str)) 
	{
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}

