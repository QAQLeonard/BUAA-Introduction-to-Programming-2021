#include<stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	
	
	printf("a[]={");
	for(int i=n-1;i>0;i--)
	{
		printf("%d,",a[i]);
	}	
	printf("%d};",a[0]);
	
	
	
	return 0;
}
