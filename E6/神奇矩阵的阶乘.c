#include<stdio.h>



int main()
{
	int n;
	scanf("%d",&n);
	int a[n][n],temp[n][n],ans[n][n];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			ans[i][j]=a[i][j];
		}
	}
    
	for(int times=0;times<n-1;times++)
    {
	    for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				temp[i][j]=0;
				for(int m=0;m<n;m++)
				{
					temp[i][j]=temp[i][j]|(a[i][m]&ans[m][j]);
				}
			}		
		}
	    
		for(int i=0;i<n;i++)
	    {
			for(int j=0;j<n;j++)
			{
				ans[i][j]=temp[i][j];
			}
		}
    }
	
	for (int i = 0; i < n; i++) 
	{
	    for (int j = 0; j < n; j++) 
	    {
	        printf("%d ", ans[i][j]);
	    }
	    
		printf("\n");
		
	}
	
	
    return 0;
}
