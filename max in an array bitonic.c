#include <stdio.h>

int main(void) 
{
	int array[50];
	int i,n,max;
	printf("enter the array size:");
	scanf("%d",&n);
	printf("\nenter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		if(array[i+1]<array[i])
		{
			max=array[i];
			break;
		}
	}
	printf("\nmax is %d",max);
	
	
	return 0;
}
