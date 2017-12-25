#include<stdio.h>
int main(void)
{
int a[]={10,20,30,40,50};
int temp[5],rno,i,j,k=0;
int len=sizeof(a)/sizeof(int);
printf("Enter how many rotations\n");
scanf("%d",&rno);
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
