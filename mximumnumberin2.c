#include<stdio.h>
int main(void)
{
	int a,b;
	printf("enter a value");
	scanf("%d",&a);
	printf("enter b value");
	scanf("%d",&b);
	if(a>b)
	{
		printf("%d is maximum",a);
	}
	else
	{
		printf("%d is maximum",b);
	}
}
