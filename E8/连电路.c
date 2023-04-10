#include<stdio.h>

int main()
{
	double r0,r;
	int op;
	scanf("%lf",&r0);
	while(scanf("%d %lf",&op,&r)!=EOF)
	{
		if(op==0){r0+=r;}
		else if(op==1){r0=(r0*r)/(r0+r);}
	}
	
	printf("%.2lf",r0);
	return 0;
}
