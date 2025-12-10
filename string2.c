//Reading And printing string using string specific function.
#include<stdio.h>
int main(void)
{
	char str[20];
	puts("Enter Your City Name:");
	gets(str);                    //scanf("%s",sptr);
	puts("\nYour City Name:");
	puts(str);
}