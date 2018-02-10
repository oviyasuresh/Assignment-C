#include <stdio.h>

int main(void) 
{
	int n;
	scanf("%d",&n);
	int a[n],i,j=0,b[n],small=1000,count=0;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[j]=a[i];
		j++;
		count=count+1;
		for(j=0;j<count;j++)
		{
			if(b[j]<=small)
			{
				small=b[j];
			}
		}
		printf("%d ",small);
		
	}
	

	return 0;
}
