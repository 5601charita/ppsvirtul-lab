//String Length Function.
//int strlen(char[]);
#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[20];
	int len;
	puts("Enter Your City Name:");
	gets(str); 
	len = strlen(str);            
	printf("\nLength of the given String is:%d",len);
}