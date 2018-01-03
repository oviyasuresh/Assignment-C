#include <stdio.h>

int main(void) 
{
	char str[50];
	int i,flag=0;
	printf("\n enter the string:");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='0' && str[i]<='9')
		{
			flag=1;	
		}
	}
	if(flag==0)
	{
		printf("\nfalse");
	}
	else
	{
		printf("\ntrue");
	}
	return 0;
}
