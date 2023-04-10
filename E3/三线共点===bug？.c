#include<stdio.h>

long long int A[1000000][3],B[1000000][3],C[1000000][3];

int main()
{
	long int n;
	scanf("%ld",&n);
	long long int i,j;
	float x,y;
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%lld %lld %lld",&A[i][j],&B[i][j],&C[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		
		x=(C[i][1]*B[i][0]-C[i][0]*B[i][1])/(A[i][0]*B[i][1]-A[i][1]*B[i][0]);
		y=(C[i][1]*A[i][0]-C[i][0]*A[i][1])/(B[i][0]*A[i][1]-B[i][1]*A[i][0]);
		if((A[i][2]*x+B[i][2]*y+C[i][2])==0)
		printf("Could be a bug!\n");
		else
		printf("A nice test data ~\n");
		
	}
	return 0; 
}
