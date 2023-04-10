#include<stdio.h>

int calculate(int n)
{

	if(n==1||n==2||n==3)
	{
		return 1;
	}
	else{return calculate(n-3)+calculate(n-1);}
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",calculate(n));
	
}
