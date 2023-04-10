#include<stdio.h>
int main()
{
	long long int n,i,fac=1,j=0;
	while(scanf("%lld",&n)!=EOF)
	{
		fac=1;
		for(i=n;i>=1;i--)//¼ÆËã½×³Ë 
		{
			fac=fac*i;
		}
		printf("%lld\n",fac);
		for(j=0;fac%10==0;j++)
		{
			fac=fac/10;
		}
		printf("%lld",j);
	}
}
