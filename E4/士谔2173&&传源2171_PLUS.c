#include<stdio.h>
#include<stdbool.h>

int somenumber[20000]={0};

typedef struct aNum{
	int origin;
	int n;
	int code1;
	int code2;
}Num;


int getn(int a)
{
	int temp=a,n=0;
	while(temp>0)
	{
		if(temp%10==2||temp%10==1||temp%10==7)
		{
			n++;
		}
		temp/=10;
	}
	return n;
}
int getcode1(int a)
{
	int temp=a,code1=0;
	while(temp>0)
	{
		code1+=temp%2;
		temp/=2;
	}
	return code1;
}

int getcode2(int a)
{
	int temp=a,code2=12;
   
	while(code2>10)
	{
		code2=0;
		while(temp>0)
		{
			code2+=temp%10;
			temp/=10;
		}
		temp=code2;
	}
	return code2;
}

bool check(Num b)
{
	if(somenumber[b.origin-1]==0)
	{
		if(b.code1==2||b.code1==1||b.code1==7){somenumber[b.origin-1]++;return true;}
		if(b.code2==2||b.code2==1||b.code2==7){somenumber[b.origin-1]++;return true;}
	}
	return false;
}

int main()
{
	int n;
	scanf("%d",&n);
	Num L,R;
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&L.origin,&R.origin);
		Num j;
		for(j.origin=L.origin;j.origin<=R.origin;j.origin++)
		{
			j.n=getn(j.origin);
			j.code1=getcode1(j.n);
			j.code2=getcode2(j.n);
			if(check(j))
			{
				printf("%d ",j.origin);
			}
		}
		printf("\n");
	}

}
