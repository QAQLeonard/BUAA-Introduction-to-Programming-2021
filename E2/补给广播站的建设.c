#include<stdio.h>
#include<math.h>
int main()
{
	double xa,xb,xc,ya,yb,yc;
	double a,b,c,x1,y1,p,S,r;
	scanf("(%lf,%lf)\n",&xa,&ya);
	scanf("(%lf,%lf)\n",&xb,&yb);
	scanf("(%lf,%lf)",&xc,&yc);
	
	c=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
	a=sqrt((xb-xc)*(xb-xc)+(yb-yc)*(yb-yc));
	b=sqrt((xc-xa)*(xc-xa)+(yc-ya)*(yc-ya));
	x1=(a*xa+b*xb+c*xc)/(a+b+c);
	y1=(a*ya+b*yb+c*yc)/(a+b+c);
	p=(a+b+c)/2;
	S=sqrt(p*(p-a)*(p-b)*(p-c));
	r=2*S/(a+b+c);
	printf("(%.3lf,%.3lf)\n",x1,y1);
	
	if(x1>0)
	{
		printf("(x-%.3lf)^2+",x1);
	}
	else if(x1==0)
	{
		printf("x^2+");
	}
	else if(x1<0)
	{
		printf("(x+%.3lf)^2+",-x1);
	}
    
	if(y1>0)
	{
		printf("(y-%.3lf)^2=%.3lf^2",y1,r);
	}
	else if(y1==0)
	{
		printf("y^2=%.3lf^2",r);
	}
	else if(y1<0)
	{
		printf("(y+%.3lf)^2=%.3lf^2",-y1,r);
	}
	return 0;
}
