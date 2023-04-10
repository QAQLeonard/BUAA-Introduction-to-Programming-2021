#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
	int n;
	long long int temp=0,ans=0;
	scanf("%d",&n);
	
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	qsort(a,n,sizeof(int),cmpfunc);
	
	
	
	for(int i=0;i<n;i++)
	{
        //printf("%d ",a[i]);
		if((temp^a[i])<=temp+a[i])
		{
			//printf("");
			temp=temp^a[i];
		}
			
		else if((temp^a[i])>temp+a[i])
		{
			temp+=a[i];
			ans+=temp;
			temp=0;
		}
	}
	if(temp!=0){ans+=temp;}
	
	printf("%lld",ans);	
}
