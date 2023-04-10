#include<stdio.h>

int getmax(int a[],int begin,int end)
{
	int maxnum=begin;
	for(int j=begin+1;j<end;j++)
	{
		if(a[j]>a[j-1])
		maxnum=j;
	}
	return maxnum;
}



int main()
{
	int n,k,num,maxcode[1000];
	scanf("%d %d",&n,&k);
	int score[n];
	for(int i=0;i<n;i++)
	scanf("%d",&score[i]);
	class_num=n/k;
	for(int i=0;i<calss_num-1;i++)
	{
		maxcode[i]=getmax(score[n],i*num,(i+1)*num);
		tempor_students_num=i;
	}
	class_num++;
	for(int i=0;i<maxcode;i++)
	
} 
