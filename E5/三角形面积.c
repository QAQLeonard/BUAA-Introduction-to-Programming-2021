#include<stdio.h>
#include<math.h>

struct apoint
{
	double x;
	double y;
};

typedef struct apoint point;

double distance(point A,point B)
{
	return sqrt((A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y));
}

double square(point A,point B,point C)
{
	double cosC;
	cosC=(pow(distance(B,C),2)+pow(distance(A,C),2)-pow(distance(A,B),2))/(2*distance(B,C)*distance(A,C));
	return distance(B,C)*distance(A,C)*sqrt(1-cosC*cosC)/2;
}

int main()
{
	int n;
	scanf("%d",&n);
	point A,B,C;
	for(int i=0;i<n;i++)
	{
		scanf("%lf %lf %lf %lf %lf %lf",&A.x,&A.y,&B.x,&B.y,&C.x,&C.y);
		printf("%.3lf %.3lf\n",distance(A,B)+distance(B,C)+distance(A,C),square(A,B,C));
	}
	return 0;
}

