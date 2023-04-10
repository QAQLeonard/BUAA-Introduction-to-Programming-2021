#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define max(x,y) x>y?x:y

/*void ten_to_two(unsigned long long n,int num[],int *length)
{
	unsigned long long temp=n;
	*length=0;
	while(temp>0)
	{
		num[*length]=temp%2;
		temp/=2;
		*length=*length+1;
	}
	*length=*length+1;
}

void two_to_ten(unsigned long long *p,int num[],int length,int m)
{
	for(int i=0;i<(max(length,2*m+1)+1);i++)
	{
		*p+=num[i]*pow(2,i);
	}
}

void swap(int num[],int a,int b)
{
	int temp=num[a];
	num[a]=num[b];
	num[b]=temp;
}
*/
int main() 
{
	unsigned long long int n,ans;
	unsigned long long temp;
	int m;
	int length;
	int num[70];
	while(scanf("%llu %d",&n,&m)!=EOF)
	{
		ans=0;
		length=0;
		memset(num,0,sizeof(num));
		
		temp=n;	
		while(temp>0)
		{
			num[length]=temp%2;
			temp=temp/2;
			length=length+1;
		}
		
		for(int i=0;i<=m;i++)
		{
			temp=num[i];
			num[i]=num[i+m+1];
			num[i+m+1]=temp;
		}
		
		for(int i=(max(length,2*m+1)+1);i>0;i--)
		{
				ans+=num[i];
				ans*=2;
				
		}
		
		ans+=num[0];
		
		printf("%llu\n",ans);
		
	}
	
	return 0;
}
