//Reading And printing string using string specific function.
#include<stdio.h>
int main(void)
{
	char str[20];
	printf("Enter Your City Name:\n");
	gets(str);                    //scanf("%s",sptr);
	printf("\nYour City Name:\n");
	puts(str);
}