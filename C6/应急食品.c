#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int a[9][9];

bool check()
{
	bool b[9]={false};
	
	for(int i=0;i<9;i++)
	{
		for(int m=0;m<10;m++){b[m]=false;}
		
		for(int j=0;j<9;j++) 
		{
			if(a[i][j]<=0||a[i][j]>9){return false;}
			if(b[a[i][j]]){return false;}
			b[a[i][j]]=true; 
		}
	}
	
	for(int j=0;j<9;j++)
	{
		for(int m=0;m<10;m++){b[m]=false;}
		
		for(int i=0;i<9;i++)
		{
			if(b[a[i][j]]){return false;}
			b[a[i][j]]=true;
		}
	}
	
	for(int i=0;i<9;i++)
	{
		for(int m=0;m<10;m++){b[m]=false;}
			
		for(int j=(i/3)*3;j<(i/3)*3+3;j++)//第j行 
		{
			for(int k=(i%3)*3;k<(i%3)*3+3;k++)//第j列 
			{
				if(b[a[j][k]]){return false;}
				b[a[j][k]]=true;
			}
		}
	}
	return true;
}










int main()
{
	
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	if(check()){printf("Cheers! O(^_^)O");}
	else{printf("Emergency food! ~>_<~");}
	
	return 0;
}
