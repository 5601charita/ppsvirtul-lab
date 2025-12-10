//Printing array elements in reverse order through pointers.
#include<stdio.h>
int main(void)
{
	int arr[5], i;
	int*ptr;
	//Reading the array elements through pointer ptr
	ptr = arr;
	printf("Enter 5-elements:\n");
	for(i=0;i<5;i++)
	    scanf("%d", ptr+i);
	//Printing the array elements in reverse order.
	ptr = &arr[4];
	printf("\nElements in array (reverse order):\n");
	for(i=0;i<5;i++)
	printf("%d ",*(ptr-i));
}