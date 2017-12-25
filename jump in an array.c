#include<stdio.h>
int main(void)
{
int status=0,s=0,i;
int a[5]={1,2,2,1,3};
for(i=0;i<5;i+=s)
{
s=a[i];
if(i==4)
status=1;
}
if(status==1)
printf("TRUE");
else
printf("FALSE");
}
 
