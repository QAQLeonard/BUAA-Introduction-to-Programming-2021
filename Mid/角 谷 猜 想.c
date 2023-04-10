#include<stdio.h>

int f(int x)
{
	if(x%2==0){return x/2;}
	else{return 3*x+1;}
}

int main()
{
	int a;
	scanf("%d",&a);
	int step=1;
	printf("%d\n",a);
	while(step<100)
	{
		printf("%d\n",f(a));
		a=f(a);
		step++;
		if(a==1){break;}
	}
	return 0;
}
