#include<stdio.h>
int main()
{
int k;
scanf("%d",&k);
while(k%2==0)
{
k=k/2;
printf("\n%d\n",k);
}
return 0;
}
