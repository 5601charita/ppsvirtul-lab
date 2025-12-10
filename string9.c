//String Comparision Length Controlled.
//concadination and copy(hw)
//week 5 progrms do all programs for hw
//strrev(char[]);
#include<stdio.h>
#include<string.h>
int main(void)
{
	char str1[] ="Hyderabad";
	char str2[] ="Hyderabad";
	int cmp;
	cmp=strncmp(str1, str2, 4);
	printf("\nString Comparision:%d",cmp);
}