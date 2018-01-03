#include <stdio.h>

int main(void) 
{
	int array[50];
	int i,n,j,count=0;
	printf("\nenter the array size:");
	scanf("%d",&n);
	printf("\nenter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("\nthe possible pairs are:");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			count=count+1;
			printf("(%d,%d)",array[i],array[j]);
		}
	}
	printf("\nnumber of pairs possible are:%d",count);
	
	return 0;
}
