#include <stdio.h>

int main(void) 
{
	char str[20];
	scanf("%s",str);
	int i,j;
	for(i=0;str[i]!='\0';i++)
	{
		for(j=i+1;str[j]!='\0';j++)
		{
			if(str[i]==str[j])
			{
				str[i]='+';
				str[j]='+';
			}
		}
	}
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!='+')
		{
			printf("%c",str[i]);
		}
	}
	
	return 0;
}
