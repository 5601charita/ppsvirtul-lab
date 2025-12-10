//String Comparision.
//strrev(char[]);
#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[] ="Hello Welcome to \nC Lab";
	int lines=0, words=0, ch=0, i=0;
	printf("\nGiven string:\n%s", str);
	while(str[i]!='\0')
	{
		if(str[i]==' ') words++;
		if(str[i]=='\n') lines++;\
		ch++;
		i++;
	}
	printf("\nNo. of Lines in the given string: %d", lines);
	printf("\nNo. of Words in the given string: %d", words);
	printf("\nNo. of Character in the given string: %d", ch);
}