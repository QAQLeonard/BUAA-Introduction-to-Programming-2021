#include<stdio.h>
#include<math.h>
int main()
{
	double angle0=6.283185;
	int n,i,j;
	scanf("%d",&n);
	int dimension[n];
	double energy[n][20],angle[n],s,s0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&dimension[i]);
		angle[i]=angle0/dimension[i];
		for(j=0;j<dimension[i];j++)
		scanf("%lf",&energy[i][j]);
		
	}
	for(i=0;i<n;i++)
	{
		//printf("%d\n",dimension[i]);
		s=0;
		s0=0;
		for(j=0;j<dimension[i];j++)
		{
			//printf("%lf ",energy[i][j]);
			if(j<dimension[i]-1)
			s+=energy[i][j]*energy[i][j+1]*sin(angle[i])/2;
			else if(j==dimension[i]-1)
			s+=energy[i][j]*energy[i][0]*sin(angle[i])/2;
			s0+=5*10*sin(angle[i]);
			//printf("%lf ",s);
		}
		printf("%.4lf\n",100*s/s0); 
	}
	return 0;
}
