#include<stdio.h>

int qpow(int a,int b,int p)
{
    int ret=1;
    while(b)
    {
        if(b&1) 
            ret=1ll*ret*a%p;
        a=1ll*a*a%p,b>>=1;
    }
    return ret;
}

int main()
{
	int a,b,p;
	scanf("%d %d %d",&a,&b,&p);
	printf("%d",qpow(a,b,p));
	return 0;
} 
