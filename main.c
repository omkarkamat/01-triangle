#include<stdio.h>
int main()
{
int i,j,a;
printf("number of times to print 01\n");
scanf("%d",&a);
for(i=0;i<a;i++)
{
for(j=0;j<=i;j++)
{
printf("01");
}
printf("\n");
}
}
