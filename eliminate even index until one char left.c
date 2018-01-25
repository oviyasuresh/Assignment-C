#include<stdio.h>
int main(void)
{
int n;
scanf("%d",&n);
int i,j,count,k,s=2,a[n];
for(i=0;i<n;i++)
{
	scanf("%d ",&a[i]);
}
for(i=0;i<n;i++)
{
count=0;
for(j=i;j<n;j+=s)
{
a[j]=0;
}
for(k=0;k<n;k++)
{
printf("%d ",a[k]);
if(a[k]!=0)
count++;
}
printf("\n");
s=s*2;
if(count==1)
break;
}
for(i=0;i<n;i++)
{
if(a[i]!=0)
printf("%d",a[i]);
}
}
