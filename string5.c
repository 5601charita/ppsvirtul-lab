//String Length Function.
//int strlen(char[]);
#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[20]="Hyderabad";
	int len,size;
	len = strlen(str);
	size = sizeof(str);     
	printf("\nLength of the given String is:%d",len);
	printf("\nSize of the given String is:%d",size);
}