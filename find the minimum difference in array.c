#include <stdio.h>

int main(void) 
{
	int array[50];
	int i,n,j,diff,temp;
	printf("\nenter the array size:");
	scanf("%d",&n);
	printf("\nenter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(array[i]<array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	printf("\nthe sorted array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",array[i]);
	}
	int min=array[0]-array[1];
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			diff=array[i]-array[j];
			if(diff<min)
			{
				min=diff;
			}
		}
	}
	printf("\nthe minimum difference is %d",min);
	
	return 0;
}
