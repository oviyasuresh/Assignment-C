#include <stdio.h>

int main(void) 
{
	int n;
	int m=2;
	scanf("%d",&n);
	int array[n],i,j,res[n];
	for(i=0;i<n;i++)
	{
		scanf("%d ",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		int count=0;
		printf("\n");
		for(j=i;j<n;j=j+m)
		{
			array[j]=0;
			if(array[j+1]!=0)
			{
			array[j]=0;
			count++;
		m=m+2;
		for(int k=0;k<n;k++)
		{
			printf("%d ",array[k]);
		}
		if(count==0 && array[i]!=0)
		{
			printf("%d",array[0]);
		}
	}

	return 0;
}
			}
		}
