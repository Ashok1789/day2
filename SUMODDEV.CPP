#include<stdio.h>
void main()
{
int i,num,oddsum=0,evensum=0;
printf("enter the value of num");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
if(i%2==0)
{
evensum=evensum+1;
}
else
{
oddsum=oddsum+1;
}
}
printf("sum of all odd numbers=%d",oddsum);
printf("sum of all even numbers=%d",evensum);
}
