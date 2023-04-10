#include<stdio.h>

int main()
{
	int op;
	scanf("%d",&op);
	double l,r;
	scanf("%lf %lf",&l,&r);
	double temp=l;
	for(double i=0;i<=r-l;i++)
	{
		if(op==0)
		{
			printf("%.0lf %.2lf\n",temp,(9*temp)/5+32);
			temp++;
		}
		else
		{
			printf("%.0lf %.2lf\n",temp,5*(temp-32)/9);
			temp++;
		}
	}
	                      
	                      
	
	
	return 0;
}
