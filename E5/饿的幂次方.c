#include<stdio.h>
int i;

void print(int n)
{
	
}


int main()
{
	int n,basic=1;
	scanf("%d",&n);
	long int a[32];
	for(i=0;i<32;i++)
	{
		if(basic>n){break;}//2^(i-1)<=n<<2^i
		a[i]=basic;
		basic*=2;
	}
    
    
	return 0;
	
} 
