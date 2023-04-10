#include<stdio.h>

long long int a[5][5];

long long int calculate(int i0,int j0)
{
	long long int b[3][3];
	int m=0,n=0;
	for(int i=0;i<4;i++)
	{
		if(i==i0){continue;}
		for(int j=0;j<4;j++)
		{
			if(j==j0){continue;}
			b[m][n]=a[i][j];
			n++;
		}
		m++;
		n=0;
	}
	m=0;n=0;
	
	/*for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}*/	
	long long int ans=b[0][0]*b[1][1]*b[2][2]+b[0][1]*b[1][2]*b[2][0]+b[1][0]*b[2][1]*b[0][2]-b[0][2]*b[1][1]*b[2][0]-b[0][1]*b[1][0]*b[2][2]-b[0][0]*b[2][1]*b[1][2];
		//return 0; 
	return ans;
	
}



int main()
{
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			scanf("%lld",&a[i][j]);
		}
	}
		/*for(int i=0;i<4;i++)
		{
			for(int j=0;j<4;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}*/
	printf("%lld\n",calculate(0,1));
	printf("%lld\n",calculate(3,2));
	printf("%lld\n",calculate(2,2));
	printf("%lld\n",calculate(0,3));
	printf("%lld\n",calculate(1,3));
	printf("%lld\n",calculate(2,2));
	printf("%lld\n",calculate(1,1));
	printf("%lld\n",calculate(3,0));
	
	
	
}

