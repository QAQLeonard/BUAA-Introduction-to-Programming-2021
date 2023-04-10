#include<stdio.h>
int main()
{
	long long int n,fac;
	while(scanf("%lld",&n)!=EOF)
	{
		fac=n/5;
		printf("%lld\n",fac);
	}
	return 0; 
}
