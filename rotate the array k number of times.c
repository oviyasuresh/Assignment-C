#include<stdio.h>

int main(void)

{
int n,rno;

scanf("%d",&n);

scanf("%d",&rno);

int temp[5],i,j,k=0,a[n];

int len=n;

for(i=0;i<len;i++)

{
	
	scanf("%d ",&a[i]);

}

for(i=0;i<rno;i++)

temp[i]=a[i];

for(j=rno;j<len;j++)

{

a[j-rno]=a[j];

}

for(j=len-rno;j<len;j++)

{

a[j]=temp[k];

k++;

}

for(i=0;i<len;i++)

{

printf("%d ",a[i]);

}

return 0;

}
