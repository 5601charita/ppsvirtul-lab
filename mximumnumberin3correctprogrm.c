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
	if(a<b && a<c) 
	{
		printf("%d is minimum",a);
	} 
	else if(b<c)
	{
		printf("%d is minimum",b);
	}
	else
	{
		printf("%d is minimum",c);
	}
}

