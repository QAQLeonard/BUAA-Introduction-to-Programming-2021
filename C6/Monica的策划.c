#include<stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	int a[n];
	int q[k];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<k;i++)
	{
		scanf("%d",&q[i]);
	}
	qsort(a,n,sizeof(int),cmpfunc);
	for(int i=0;i<k;i++)
	{
		printf("%d\n",a[n-q[i]]);
	}
	return 0;
}
