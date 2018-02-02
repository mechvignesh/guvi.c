#include<stdio.h>
int main()
{
int b,i;
scanf("%d",&b);
for(i=1;b>10;i++)
{
b=b/10;
}
printf("%d",i);
return 0;
}
