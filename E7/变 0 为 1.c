#include<stdio.h>
#include<math.h>
#include<limits.h>
#define max(A,B) (A) > (B) ? (A) : (B)

typedef struct aPoint{
	int x;
	int y;
}Point;

int distance(Point point,Point point1[],int k)
{
	int ans=INT_MAX;
	for(int j=0;j<k;j++)
	{
		if((abs(point.x-point1[j].x)+abs(point.y-point1[j].y))<ans)
		{ans=abs(point.x-point1[j].x)+abs(point.y-point1[j].y);}
	}
	return ans;
}



int main()
{
	int n,m,k,t;
	scanf("%d %d %d %d",&n,&m,&k,&t);
	Point point1[k],point;
	
	for(int i=0;i<k;i++)
	{
		scanf("%d %d",&point1[i].x,&point1[i].y);
	}
	for(int i=0;i<t;i++)
	{
		scanf("%d %d",&point.x,&point.y);
		printf("%d\n",distance(point,point1,k));
		
	}	
	
	
	
	
	
	
	return 0;
}
