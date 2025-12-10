//Reading And printing array elements through pointers.
#include<stdio.h>
int main(void)
{
	int arr[5], i;
	int*ptr;
	ptr = arr;
	//Reading the array elements through pointer ptr
	printf("Enter 5-elements:\n");
	for(i=0;i<5;i++)
	    scanf("%d", ptr+i);
	//Printing the array elements through pointer ptr
	printf("\n Array Elements are:\n");
	for(i=0;i<5;i++)
	printf("%d", *(ptr+i));
	
}