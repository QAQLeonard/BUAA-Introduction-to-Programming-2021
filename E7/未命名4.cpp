#include<stdio.h>

int main()
{
	int n,temp;
	scanf("%d",&n);
	int a[n]={0};
	for(int i=0;i<n;i++)
	{
		scanf("%d",&temp);
		a[temp]++;
	}
	
	
	for(int i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			printf("%d:%d\n",i,a[i]);
		}
	}	
	
	
	return 0;
}
