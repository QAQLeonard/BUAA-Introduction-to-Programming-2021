#include<stdio.h>

int comb_num(int m, int n)
{
if ( m < n || m < 0 || n < 0) {return 0;}  
if ( n == 1 ) {return m;}
if ( n == m || n == 0) {return 1;}
return comb_num(m-1, n) + comb_num(m-1, n-1);
}

int main()
{
	int num,m,n;
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
		scanf("%d",&m);
		scanf("%d",&n);
		printf("%d\n",comb_num(m,n));
	}
	return 0;
}
