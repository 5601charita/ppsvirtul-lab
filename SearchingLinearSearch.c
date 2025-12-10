#include <stdio.h>
//Function Declartion
int seqSearch(int[],int,int);
int main(void)
{
	int list[20], target, index, i, size;
	printf("Enter any size of the list:");
	scanf("%d",&size);
	printf("Enter any %d elements:\n",size);
	for (i = 0;i < size;i++)
	scanf("%d",&list[i]);
	
	printf("Enter a target value to search:");
	scanf("%d",&target);
	//Function Call
	index=seqSearch(list,target,size);
	if (index==-1)
	    printf("%d is not present in the list.\n",target);
	else 
	    printf("%d is present at %d in the list.\n",target,index);
	    return 0;
}
//Function Defination
int seqSearch(int list[],int target,int size)
{
	int index;
	for(index=0;index < size;index++)
	    if(list[index] == target)
	        return index;
	return -1;
}