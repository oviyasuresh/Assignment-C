#include <stdio.h>

int main(void) 
{
	int n;
	scanf("%d",&n);
	int array[n],i,j,pro=1;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			pro=pro*array[j];
		}
	printf("%d ",pro);
		
	}
	
	return 0;
}
