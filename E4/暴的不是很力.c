#include<stdio.h>
#include<stdbool.h>

void getnum(int a,int *num)
{
	for(int i=0;i<3;i++)
	{
		num[i]=a%10;
		a/=10;
	}
}

bool check(int a[3],int b[3],int c[3])
{
	int time[10]={0};
	for(int m=0;m<3;m++)
	{
		time[a[m]]++;
		time[b[m]]++;
		time[c[m]]++;
	}
	if(time[0]!=0){return false;}
	for(int m=1;m<10;m++)
	{
		if(time[m]>=2){return false;}
	}
	return true;
}

int main()
{
	int a,b,c,A[3],B[3],C[3],base,t=0;
	scanf("%d %d %d",&a,&b,&c);
	for(base=1;base<=987;base++)
	{
		if(a*base<111){continue;}
		if(c*base>987){break;}
		getnum(a*base,A);
		getnum(b*base,B);
		getnum(c*base,C);
		//printf("%d %d %d %d\n",a*base,A[0],A[1],A[2]);
		if(check(A,B,C))
		{
			printf("%d %d %d\n",a*base,b*base,c*base);
			t++;
		}
	}
	if(t==0){printf("NOT FOUND");}
	return 0;
}
