#include<stdio.h>
int main()
{
int n,pro=1,digit;
scanf("%d",&n);
while(n!=0)
{
digit=n%10;
pro=pro*digit;
n=n/10;
}
printf("%d",pro);
return 0;
}
