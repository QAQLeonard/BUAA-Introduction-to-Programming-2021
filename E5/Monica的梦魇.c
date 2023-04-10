#include<stdio.h>

typedef long long int lli;

lli comb_num(lli m, lli n)
{
    if ( m < n || m < 0 || n < 0) {return 0;}  
    if ( n == 1 || n == m-1 ) {return m%13;}
    if ( n == m || n == 0) {return 1;}
    return comb_num(m-1, n)%13 + comb_num(m-1, n-1)%13;
}

lli g(lli m,lli n)
{
	if(m<=13&&n<=13){return comb_num(m,n)%13;}
	else{return comb_num(m%13,n%13)*g(m/13,n/13)%13;}
	
}

int main()
{
	lli m,n;
	while(scanf("%lld %lld",&m,&n)!=EOF)
	{
		printf("%lld\n",g(m,n));
	}
	return 0;
}
