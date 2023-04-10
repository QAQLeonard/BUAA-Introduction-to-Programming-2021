#include <stdio.h>
#include <math.h>
#define PI 3.14159265
int n,t,i,k,p[100];
double S[100],sine,total_S,total,angle;
int main()
{
	//输入数据 
	scanf("%d",&n);
	for(t=0;t<n;t++)
	{
		scanf("%d",&k);
		for(i=1;i<=k;i++)
		{
			scanf("%d",&p[i]);
		}
	//计算过程
	angle=360.0000*PI/180/k;
	sine = sin (angle);
	total=0.5*100*k*sine;
	S[k]=0.5*p[1]*p[k]*sine;
	total_S=S[k];
	for(i=1;i<k;i++)
	{
		S[i]=0.5*p[i]*p[i+1]*sine;
		total_S+=S[i];
	}
	printf("%.4lf\n",total_S/total*100);
	}
	return 0;
}
