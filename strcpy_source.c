#include<stdio.h>
int main()
{ 
char source[] = "Hello, world!"; 
char destination[50]; 	
int i; 
// Copy string manually 
		for (i = 0; source[i] != '\0'; i++)
	{
		destination[i] = source[i];
	} 
	destination[i] = '\0'; 
		printf("Source: %s\n", source); 
		printf("Destination: %s\n", destination); 
return 0;
}
