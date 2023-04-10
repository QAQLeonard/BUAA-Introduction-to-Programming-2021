#include<stdio.h>

int p,q,a,b,c;

long long int f(int n)
{
	if(n==1){return p;}
	else if(n==2){return q;}
	else{return a*f(n-1)+b*f(n-2)+c;}
}

int main()
{
	int n;
	scanf("%d %d %d %d %d %d",&n,&p,&q,&a,&b,&c);
	printf("%lld\n",f(n));
	return 0;
}
