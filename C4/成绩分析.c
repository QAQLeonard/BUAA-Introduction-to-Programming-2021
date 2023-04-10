#include<stdio.h>

typedef struct aStudent{
	char A;
	int B;
}Student;


int main()
{
	int a[55]={0},b[55]={0},c[55]={0};
	int sum[3]={0},num,n[3]={0};
	int amax=0,amin=100,bmax=0,bmin=100,cmax=0,cmin=100;
	double ave[3];
	scanf("%d",&num);
	Student student[num];
	for(int i=0;i<num;i++)
	{
		scanf("%c ",&student[i].A);
		if(student[i].A=='A')
		{
			scanf("%d\n",&student[i].B);
			a[n[0]]=student[i].B;
			n[0]++;
			sum[0]+=student[i].B;
			if(amin>=a[n[0]]){
						    amin=a[n[0]];
						   }
						   if(amax<=a[n[0]]){
						    amax=a[n[0]];
						   }
		}
		if(student[i].A=='B')
		{
			scanf("%d\n",&student[i].B);
			b[n[1]]=student[i].B;
			n[1]++;
			sum[1]+=student[i].B;
			if(bmin>=b[n[1]]){
			    bmin=b[n[1]];
			   }
			   if(bmax<=b[n[1]]){
			    bmax=b[n[1]];
			   }
		}
		if(student[i].A=='C')
		{
		    scanf("%d\n",&student[i].B);
			c[n[2]]=student[i].B;
			n[2]++;
			sum[2]+=student[i].B;
			if(cmin>=c[n[2]]){
			    cmin=a[n[2]];
			   }
			   if(cmax<=c[n[2]]){
			    cmax=c[n[2]];
			   }
		}
	}
	for(int i=0;i<3;i++)
	{
		ave[i]=(double)sum[i]/n[i];
	}
	int max=0;
	for(int m=0;m<2;m++)
	{
		if(ave[m]<ave[m+1])
		{
			max=m+1;
		}
			
	}
    printf("%c\n",max+65);
     printf("%d %d\n",amax,amin);
	 printf("%d %d\n",bmax,bmin);
	 printf("%d %d\n",cmax,cmin);
	 return 0;
}
