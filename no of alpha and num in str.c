#include <stdio.h>

int main(void) 
{
	char str[20];
	int n,i,j,alpha=0,num=0;
	printf("enter the string:");
	scanf("%s",str);
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
		{
			alpha+=1;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			num+=1;
		}
	
	}
	printf("\nalphhabets=%d\nnumbers=%d",alpha,num);
	return 0;
}
