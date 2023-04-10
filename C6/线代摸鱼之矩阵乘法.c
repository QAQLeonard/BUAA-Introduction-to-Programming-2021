#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	int a[t][t],b[t][t],c[t][t];
	for(int i=0;i<t;i++)
	{
		for(int j=0;j<t;j++)
		{
			scanf("%d",&a[i][j]);
			c[i][j]=0;
		}
	}
	for(int i=0;i<t;i++)
	{
		for(int j=0;j<t;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	for(int i=0;i<t;i++)
	{
		for(int j=0;j<t;j++)
		{
			for(int m=0;m<t;m++)
			{
				c[i][j]+=a[i][m]*b[m][j];
			}
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}	
	
	
	return 0;
	
		
}
