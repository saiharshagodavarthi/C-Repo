#include <stdio.h> 
#include "File1.c" 
extern int x;   
int main()  
{ 
    printf("Accessing x in another file: %d\n", x);    
	 display();     
	 return 0; 
} 

