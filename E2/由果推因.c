#include<stdio.h>
int main()
{
	int n,i=0;
	scanf("%d",&n);
	int code[n];
	float p[n],q[n],pro[n],sum;
	sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%d %f %f",&code[i],&p[i],&q[i]);
		pro[i]=p[i]*q[i];
	}
	
	for(i=0;i<n;i++)
	{
		sum+=pro[i];//计算总概率 
	}
	
	for(i=0;i<n-1;i++)//比较大小 
	{
		if(pro[i]>=pro[i+1])
		{
			code[i+1]=code[i];
			p[i+1]=p[i];
			q[i+1]=q[i];
			pro[i+1]=pro[i];
		}
	}
	
	if(pro[n-1]<1e-5)
	{
		printf("ERROR!");
	} 
	else
	{
		printf("%04d %.4f",code[n-1],pro[n-1]/sum);
	}
	
	
	return 0;
}
