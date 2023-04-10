#include<stdio.h>
int main()
{
	int n;
	long long int num=0;
	scanf("%d",&n);
	for(int k=1;k<=n;k++)
	{
		num+=n/k;
		if(n%k==0){num--;}
	}
	printf("%lld\n",num);
	return 0;
}
