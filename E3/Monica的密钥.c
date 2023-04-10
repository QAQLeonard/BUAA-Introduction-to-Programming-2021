#include<stdio.h>
#include<math.h>


long long int calculate(int a,long long int b)
{
	long long int c;
	long long int ans=1;
	for(int i=0;b>0;i++)
	{
		if(b%2!=0)
		{
			c=pow(a,pow(2,i));
			ans*=(long long int)pow(a,pow(2,i))%998244353;
			ans=(long long int)ans%998244353;
			printf("%lld ",c);
		}
		b/=2;
		printf("%lld ",ans);
		printf("%lld\n",b);		
	}
	return ans;
}


int main()
{
	long long int a0,b0;
	scanf("%lld %lld",&a0,&b0);
	long long int k1,k2;
	k1=calculate(a0,b0);
	k2=calculate(a0,k1);
	printf("%lld\n",k2);
	return 0;
}
