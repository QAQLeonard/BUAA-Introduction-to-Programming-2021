#include<stdio.h>
#define basic 1000000007

int N,a,b,c,op[17];

int getnum1(int a)
{
	int ans=0;
	for(int j=0;j<3;j++)
	{
		if(a%2==1)ans++;
		a/=2;
	}
	return ans;
}

int main()
{
	scanf("%d %d %d %d",&N,&a,&b,&c);
	//printf("%d %d %d %d\n",N,a,b,c);
	for(int i=0;i<N;i++)
	{
		scanf("%d",&op[i]);
	}
	long long int finalans=0;
	int temp=op[N-1];
	for(int i=0;i<3;i++)
	{
		if(temp%2==1)
		{
			if(i==0)finalans+=c;
			else if(i==1)finalans+=b;
			else if(i==2)finalans+=a;
		}
		temp/=2;
	}
	//printf("%lld\n",finalans);
	for(int i=N-1;i>0;i--)
	{
		finalans=(finalans*getnum1(op[i-1]))%basic;
	}
	
	printf("%lld",finalans);
	return 0;
	
	
	
}
