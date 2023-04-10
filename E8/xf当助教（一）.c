#include<stdio.h>
#include<string.h>


long long int a[100005],hash[300005];

int main()
{
	int t,count;
	long long num;
	
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		count=0;
		memset(a,0,sizeof(a));
		memset(hash,0,sizeof(hash));
		scanf("%lld",&num);
		for(int j=0;j<num;j++)
		{
			scanf("%lld",&a[j]);
			if (a[j] < j) 
			{
				hash[2 * num + a[j]-j]++;
			} 
			else 
			{
				hash[a[j]-j]++;
			}			
		}
		for (long long j = 0; j < 2 * num; j++) 
		{
			count += (hash[j] - 1) * hash[j] / 2;
		}		
		
		printf("%d\n",count);
		
	}
	
	
	
	
	
	return 0;
}
