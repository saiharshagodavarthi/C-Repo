#include<stdio.h>
int main()
{
	char str[100],dest[100];
	int i,len;
	printf("Enter a string:");
	gets(str);
	printf("string is %s",str);
	len =strlen(str);
	printf("\nlength is %s",len);
	strcpy(dest,str);
	printf("\ncopied is %s",dest);
	strrev(dest);
	printf("\nreversed is %s",dest);
	strcat(str,dest);
	printf("\n after joining:%s",str);
	return 0;
}
