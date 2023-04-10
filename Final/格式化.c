#include<stdio.h>
#include<string.h>



int main()
{
	int m,n;
	char format[32];  
	scanf("%d %d",&m,&n);
	printf("%%%d.%dlf\n",m,n);
	
	double num;
	scanf("%lf",&num);
	sprintf(format, "%%%d.%dlf\n", m,n);
	
	
	printf(format,num);
	
	
	
} 
