#include<stdio.h>
int main()
{
	int n,k[100],i;
	scanf("%d",&n);
	printf("\n enter the  numbers with one change");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&k[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(i!=k[i])
		{
			printf("\n %d",i);
			break;
		}
	}
	return 0;
}
