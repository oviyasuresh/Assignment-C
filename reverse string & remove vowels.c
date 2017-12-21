#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str[20];
	int i,n,j,temp;
	printf("\n enter the string");
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
	printf("\nreversed:%s",str);
	for(i=0; i<n; i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
		str[i]=='o' || str[i]=='u' || str[i]=='A' ||
		str[i]=='E' || str[i]=='I' || str[i]=='O' ||
		str[i]=='U')
		{
			for(j=i; j<n; j++)
			{
				str[j]=str[j+1];
			}
		n--;
		}
	}
	printf("\nAfter deleting the vowels, the string will be : %s",str);
	

return 0;
}
