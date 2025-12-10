//String Comparision.
//strrev(char[]);
#include<stdio.h>
#include<string.h>
int main(void)
{
	char str1[] ="MOM";
	char str2[] ="MOMMY";
	int cmp;
	cmp=strcmp(str1, str2);
	printf("\nString Comparision:%d",cmp);
}