#include<stdio.h>

long long int f(long long int x)
{
	long long int ans=0;
	while(x>0)
	{
		//printf("%lld",x%2);
		if(x%2==1){ans++;}
		x/=2;
	}
	return ans;
}

int main()
{
	long long int x;
	while(scanf("%lld",&x)!=EOF)
	{
		printf("%lld\n",f(f(f(x))));
	}
	
	
	return 0;
}
