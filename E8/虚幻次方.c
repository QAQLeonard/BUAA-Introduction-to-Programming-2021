#include<stdio.h>
#include<math.h>
#include<stdbool.h>

void question_one(long long int num)
{
	bool negative=false;
	if(num<0){negative=true;num=-num;}
	int step=1,a=1;
	
	for(int i=2;i<=sqrt(num);i+=step)
	{
		if(i==3){step=2;}
		if(i>=7){step=5-step;}		
		
		if(num%(i*i)==0)
		{
			num=num/(i*i);
			a*=i;
			i-=step;
		}
	}
	
	if(num==0){printf("0");}
	else if(num==1&&a==1&&negative){printf("i");}
	else
	{
		if(num==1){printf("%d",a);}
		else
		{
			if(a!=1){printf("%d*sqrt(%lld)",a,num);}
			else if(a==1){printf("sqrt(%lld)",num);}
		}
	
		if(negative){printf("*i");}
	}
		printf("\n");
}

void question_two(long long int num)
{
	if(num%2==0)
	{
		if((num/2)%2==0){printf("1\n");}
		else if((num/2)%2==1){printf("-1\n");}
	}
	
	if(num%2==1)
	{
		num--;
		if((num/2)%2==0){printf("i\n");}
		else if((num/2)%2==1){printf("-i\n");}
	}
	
	
}




int main()
{
	int n;
	long long int num;
	scanf("%d",&n);
	int code;
	for(int j=0;j<n;j++)
	{
		scanf("%d %lld",&code,&num);
		if(code==1){question_one(num);}
		else if(code==2){question_two(num);}
	}

	
	
	
	return 0;
}
