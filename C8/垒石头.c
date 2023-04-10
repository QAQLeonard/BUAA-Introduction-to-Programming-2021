#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool move[1007]={false};
int times[1007];
bool check(int n,int a[],char ch[])
{
	for(int k=1;k<=n;k++)
	{
		times[k]=0;
	}	
	
	
	for(int k=0;k<n;k++)
	{
		times[a[k]]++;
	}
	for(int k=0;k<n;k++)
	{
		if(times[a[k]]>1)
		{
			if(ch[k]=='B')
			{
				a[k]--;

			}
			else if(ch[k]=='R')
			{
				a[k]++;
				
			}
			for(int x=0;x<n;x++){printf("%d",a[x]);}printf("\n");
			move[k]=true; 
			return check(n,a,ch);
		}
	}
	
	
	
	for(int k=1;k<=n;k++)
	{
		//printf("%d",times[k]);
		if(times[k]!=1){return false;}
	}
	return true;
}





int main()
{
	int t,n,a[1007];
	char ch[1007];
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%d",&n);
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
		}
		scanf("%s",ch);
		
		if(check(n,a,ch)){printf("YES\n");}
		else {printf("NO\n");}
		
	}
	
	
	return 0;
} 
