#include <stdio.h>

int main(void) 
{
	char string[20];
	int i,j,n;
	printf("enter the string\n");
	scanf("%s",string);
	n=strlen(string);
	for(i=0;i<n;i++)
	{
		int count=1;
		for(j=i+1;j<n;j++)
		{
			if(string[i]==string[j])
			{
				count+=1;
				string[j]='+';
			}
			
		}
		if(string[i]!='+')
		printf("%c=%d\t",string[i],count);
	}
	
	
	return 0;
}
