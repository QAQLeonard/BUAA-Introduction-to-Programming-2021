#include<stdio.h>

long long int C(int x)
{
	if(x==0||x==1){return 1;}
	else{return C(x-1)*(4*x-2)/(x+1);}
}



int main()
{
	int x;
	scanf("%d",&x);
	printf("%lld",C(x));
	
	return 0;
} 
