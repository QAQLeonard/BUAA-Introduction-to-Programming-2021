#include<stdio.h>

long long int times[10]={0};

void calculate(int begin,int end)
{
	int temp;
	for(int i=begin;i<=end;i++)
	{
		temp=i;
		if(temp==0)
		{
			times[0]++;
			continue;
		}
		while(temp>0)
		{
			times[temp%10]++;
			temp/=10;
		}
	}
}



int main()
{
	int begin,end;
	scanf("%d %d",&begin,&end);
	calculate(begin,end);
	for(int i=0;i<10;i++){printf("%lld ",times[i]);}
	return 0;
}
