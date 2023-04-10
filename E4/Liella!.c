#include<stdio.h>
int main()
{
	int input,sum=0,num=0,score[300]={0},max,min,maxid,minid,time[101]={0},mode=0;
	double ave;
	scanf("%d",&input);
	while(input!=-1)
	{
		if(input>=0&&input<=100)
		{
			sum+=input;
			score[num]=input;
			num++;
			time[input]++;
		}
		scanf("%d",&input);
	}
	ave=(double)sum/num;
	max=score[0];
	min=score[0];
	for(int i=0;i<num;i++)
	{
		
		if(score[i]>=max) 
		{
			max=score[i];
			maxid=i+1;
			//printf("%d\n",max);
		}
		if(score[i]<=min) 
		{
			min=score[i];
			minid=i+1;
		}
	}
	for(int i=0;i<101;i++)
	{
		if(time[i]>=time[mode])
		{
			mode=i;
		}
	}
	printf("count: %d\nave: %.4lf\nmax: %d: %d\nmin: %d: %d\nmode: %d",num,ave,maxid,max,minid,min,mode);
	return 0;
}
