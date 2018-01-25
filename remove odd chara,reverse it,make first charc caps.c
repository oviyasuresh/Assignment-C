#include <stdio.h>

int main(void) 
{
	char str[30];
	int i,j,n,temp;
	scanf("%s",str);
	n=strlen(str);
	i=0;
	j=n-1;
	while(i<j)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		{
			str[i]='+';
		}
	}

	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			if(str[i]>91)
			{
				str[i]=str[i]-32;
			}
		}
		if(str[i]!='+')
		printf("%c",str[i]);
	}
	
	
	
	return 0;
}
