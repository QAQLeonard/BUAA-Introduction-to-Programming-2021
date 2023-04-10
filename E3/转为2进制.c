#include<stdio.h>
int main()
{
	int N,a[32],i;
	while(scanf("%d",&N)!=EOF)
	{
	if(N>=0)
	{
		a[31]=0;

	}
	else
	{
		a[31]=1;
		N=0-N;
	}
	for(i=0;i<31;i++)
	{
		a[i]=N%2;
		N/=2;
	}
	for(i=31;i>=0;i--)
	{
		printf("%d",a[i]); 
	}
	printf("\n");
	}
	return 0;
} 
