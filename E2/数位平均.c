#include<stdio.h>
int main()
{
	long long int n0,n;
	int i,num[10],sum=0,t;
	t=0;
	float ave;
	scanf("%lld",&n0);
	n=n0;
	for(i=0;i<10;i++)
	{
		num[i]=n%10;
		n=n/10;
		sum+=num[i];
	}
	ave=(float)sum/10;
	
	for(i=9;i>0;i--)
	{
		if(num[i]>ave)
		{
			num[i]=0;
		}
		if(num[i]!=0)
		{
			t=1;
		}
		if(t==1)
		{
			printf("%d",num[i]);
			
		}
		
	}
	
	if(num[i]>ave)    //n=0 
	{
		num[i]=0;
	}
	printf("%d",num[i]);
	return 0;
}
