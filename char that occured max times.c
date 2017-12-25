#include<stdio.h>
int main(void)
{
char str[10],maxchar;
int i,j,max=0,count=0;
printf("Enter the String\n");
gets(str);
for(i=0;i<strlen(str);i++)
{
count=1;
for(j=i+1;j<strlen(str);j++)
{
if(str[i]==str[j])
count++;
if(count>max)
{
max=count;
maxchar=str[i];
}
}}
printf("%c has occured %d times",maxchar,max);
}
