#include<stdio.h>
int main()
{
int n,i,j;
printf("Enter the n value\n");
scanf("%d",&n);
for(i=1;i<=n+1;i++)
{
for(j=1;j<=n+1-i;j++)
printf(" ");

for(j=1;j<=i;j++)
printf("%d",i-j);

for(j=1;j<=i-1;j++)
printf("%d",j);

printf("\n");
}
}



