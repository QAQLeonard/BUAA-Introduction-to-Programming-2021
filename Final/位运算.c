#include<stdio.h>
#include<math.h>

int a[64];

int main()
{
	long long int n;
	int i=0;
	long long int ans=0;
	scanf("%lld",&n);
	long long int temp=n;
	while(temp>0)
	{
		a[i]=temp%2;
		temp/=2;
		i++;
	}
	for(int j=0;j<=15;j++)
	{
		if(a[j]==1)a[j]=0;
		else if(a[j]==0)a[j]=1;
	}
	
	for(int j=0;j<64;j++)
	{
		ans+=a[j]*pow(2,j);
	}
	
	printf("%lld",ans);
	
	
	
}
