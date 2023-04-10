#include<stdio.h>
#include<math.h>
#define pi 3.1415926
typedef struct aPoint{
	
	double x;
	double y;
	
}Point;



int main()
{
	double angel,x,y;
	int n;
	scanf("%d\n",&n);
    Point point[n];
	for(int i=0;i<n;i++)
	{
		scanf("(%lf,%lf)\n",&point[i].x,&point[i].y);
	}
	
	scanf("theta=%lf",&angel);
	
	//printf("%lf\n",angel);
	
	while(angel>=2*pi)
	{
		angel-=2*pi;
	}
	while(angel<0)
	{
		angel+=2*pi;
	}	
	
	printf("%lf",angel);
	
	for(int i=0;i<n;i++)
	{
		x=point[i].x*cos(angel)+point[i].y*sin(angel);
		y=point[i].y*cos(angel)-point[i].x*sin(angel);

		printf("(%.2lf,%.2lf)\n",x,y);
	}
	
	
	
	return 0;
}
