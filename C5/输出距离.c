#include<stdio.h>
#include<math.h>

typedef struct aPoint{
	double x;
	double y;
	double z;
}Point;

Point point[4];

double calculate(int code1,int code2)
{
	double distance;
	distance=sqrt((point[code1].x-point[code2].x)*(point[code1].x-point[code2].x)+(point[code1].y-point[code2].y)*(point[code1].y-point[code2].y)+(point[code1].z-point[code2].z)*(point[code1].z-point[code2].z));
	return distance;
}

int main()
{
	
	for(int i=0;i<4;i++)
	{
		scanf("%lf%lf%lf",&point[i].x,&point[i].y,&point[i].z);
		
	}
	printf("%.2lf\n",calculate(1,3));
	printf("%.2lf\n",calculate(0,2));
	printf("%.2lf\n",calculate(1,2));
	printf("%.2lf\n",calculate(2,3));
	printf("%.2lf\n",calculate(0,1));
	printf("%.2lf\n",calculate(0,3));
	return 0;
	
}
