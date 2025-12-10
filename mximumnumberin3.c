#include<stdio.h>
int main(void)
 {
	int a,b,c;
	printf("Enter a value : ");
	scanf("%d",&a);
	printf("Enter b value : ");
	scanf("%d",&b);
	printf("Enter c value : ");
	scanf("%d",&c);
	if(a>b && a>c) 
	{
		printf("%d is maximum",a);
	} 
	else if(b>c)
	{
		printf("%d is maximum",b);
	}
	else
	{
		printf("%d is maximum",c);
	}
}

