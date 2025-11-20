#include <stdio.h> 
int main() 
{ 
	char str1[100] = "Hello, "; 
	char str2[] = "world!"; 
int i, j; 
	for (i = 0; str1[i] != '\0'; i++); 
		for (j = 0; str2[j] != '\0'; j++, i++) 
	{ 
		str1[i] = str2[j];
	}
 		str1[i] = '\0'; // Add null terminator at the end 
 		printf("Concatenated string: %s\n", str1); 
 return 0;
}
