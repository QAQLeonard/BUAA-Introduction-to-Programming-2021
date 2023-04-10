#include<stdio.h>

typedef struct astudent{
	int choose;
	int code;
}student;



int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	student a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&a[i].choose,&a[i].code);
	}
	int position=0,step;
	int direction;
	
	for(int i=0;i<m;i++)
	{
		scanf("%d %d",&direction,&step);
		if(direction==0)
		{
			if(a[position].choose==0)
			{
				position+=n-step;
			}
			else if(a[position].choose==1)
			{
				position+=step;				
			}
			position%=n;	
		}
		
		else if(direction==1)
		{
			if(a[position].choose==0)
			{
				position+=step;
			}
			else if(a[position].choose==1)
			{
				position+=n-step;
								
			}
			position%=n;
		}	
		//printf("%d\n",a[position].code);
	}
	
	
	printf("%d\n",a[position].code);
	return 0;
} 
