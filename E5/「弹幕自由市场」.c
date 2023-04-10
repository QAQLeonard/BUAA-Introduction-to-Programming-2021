#include<stdio.h>

int main()
{
	long long int n,num;
	long long int money,max_profit;
	scanf("%lld %lld",&n,&money);
	max_profit=money;
	long long int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
    }
	
	for(int i=0;i<n-1;i++)
	{
		num=money/a[i];
		for(int j=i;j<n;j++)
		{
			if(money-num*a[i]+num*a[j]>max_profit)
			{
				max_profit=money-num*a[i]+num*a[j];
			}
		}
	}
	printf("%lld",max_profit);
	return 0;
	
	
}
