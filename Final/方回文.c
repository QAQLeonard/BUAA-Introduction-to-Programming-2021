#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

#define max 1048576

char ch[10000005];
char tempch[10000005];

bool isnum(char ch[10000005])
{
	int length=strlen(ch);
	for(int i=0;i<length/2;i++)
	{
		if(ch[i]!=ch[length-i-1])return false;
	}
	
	return true;
	
}

void change(long long int n,int N)
{
	long long int temp=n,i=0;
	//printf("%d %d\n",temp,N);
	while(temp>0)
	{
		//printf("%d ",25%16);
		if(temp%N>9){ch[i]=temp%N-10+65;}
		else{ch[i]=temp%N+48;}
		temp/=N;
		i++;
		
	}
	//puts(ch);
}

int main()
{
	int N,num=0;
	while(scanf("%d",&N)!=EOF)
	{
		for(int i=0;i<max;i++)
		{
			change(i*i,N);
			if(isnum(ch))
			{
				strcpy(tempch,ch);
				num++;
				printf("%d %d %s\n",i,num,tempch);
			}
		}
		printf("%d\n%s\n",num,tempch);
		//printf("%d",isnum("9DF8A8FD9"));
		
		
	}
	
	
	
	return 0;
}
