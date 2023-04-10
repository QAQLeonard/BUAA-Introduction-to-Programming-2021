#include<stdio.h>
#include<stdbool.h>

void printdec(double N)
{
	int b[10]={0};
	double dec=N-(int)N;
	for(int i=0;i<10;i++)
	{
		if(dec*2>=1)
		{
			b[i]=1;
			dec=dec*2-1;
		}
		else if(dec*2<1)
		{
			b[i]=0;
			dec*=2;
		}
		printf("%d",b[i]);
	}
}

void printint(double N)
{
	int n,a[32]={0};
	n=(int)N;
	bool zero=false;
	for(int i=0;i<31;i++)
	{
		a[i]=n%2;
		n/=2;
	}
	for(int i=31;i>0;i--)
	{
		if(a[i]!=0){zero=true;}
		if(zero)
		{
			printf("%d",a[i]);
		}
	}
	printf("%d.",a[0]);
}

int main()
{
	double N;
	scanf("%lf",&N);
	printint(N);
	printdec(N);
	return 0;
}
