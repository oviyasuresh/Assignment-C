#include <stdio.h>

int main(void) 
{
	int array[50];
	int i,n;
	printf("enter the array size:");
	scanf("%d",&n);
	printf("\nenter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		if(array[i]%2==0)
		{
			printf("\n%d",array[i]);
		}
	
	}
	return 0;
}
