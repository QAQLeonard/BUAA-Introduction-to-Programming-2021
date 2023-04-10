#include<stdio.h>
#include<stdbool.h>

int bound;

int calculate(int a[][10],int i,int j)
{
	int ans=0,temp=0;
	if(i<bound-4)
	{
		temp=1;
		for(int step=1;step<5;step++)
		{
			if(a[i+step][j]!=a[i][j]){temp=0;break;}
		}
		ans+=temp;
		//if(temp==1){printf("heng%d %d\n",i,j);}
	}
	
	
	if(j<bound-4)
	{
		temp=1;
		for(int step=1;step<5;step++)
		{
			if(a[i][j+step]!=a[i][j]){temp=0;break;}
		}
		ans+=temp;
		//if(temp==1){printf("shu%d %d\n",i,j);}
	}
	
	
	if(i<bound-4&&j<bound-4)
	{
		temp=1;
		for(int step=1;step<5;step++)
		{
			if(a[i+step][j+step]!=a[i][j]){temp=0;break;}
		}
		ans+=temp;
        //if(temp==1){printf("45%d %d\n",i,j);}
	}
	
	if(i<bound-4&&j>=4)
	{
		temp=1;
		for(int step=1;step<5;step++)
		{
			if(a[i+step][j-step]!=a[i][j]){temp=0;break;}
		}
		ans+=temp;
		//if(temp==1){printf("135%d %d\n",i,j);}		
	}	
	
	return ans;
}

int main()
{
	
	scanf("%d",&bound);
	int a[bound][10];
	int ans1=0,ans2=0;
	for(int i=0;i<bound;i++)
	{
		for(int j=0;j<bound;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}	
    
	for(int i=0;i<bound;i++)
	{
		for(int j=0;j<bound;j++)
		{
			if(a[i][j]==0){continue;}
			else if(a[i][j]==1){ans1+=calculate(a,i,j);}
			else{ans2+=calculate(a,i,j);}
			
		}
	}	    
    
    printf("%d\n%d",ans1,ans2);
    return 0;
    
}
