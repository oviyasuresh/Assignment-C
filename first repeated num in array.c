#include <stdio.h>

int main(void) 
{
	int n;
	scanf("%d",&n);
	int array[n],i,j,flag=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(array[i]==array[j])
			{
				flag=1;
				printf("%d",array[i]);
				break;
			}
			if(flag==1)
			break;
		}
	}
	if(flag==0)
	{
		printf("unique");
	}
	
	return 0;
}
