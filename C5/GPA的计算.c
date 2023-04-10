#include<stdio.h>

double GPA(double x)
{
	double gpa;
	if(x<60){return 0;}
	gpa=4-3*(100-x)*(100-x)/1600;
	return gpa;
}

int main()
{
	int num;
	float x,h;
	double sum_GPA=0,sum_score=0;
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
		scanf("%f%f",&x,&h);
		sum_GPA+=GPA(x)*h;
		sum_score+=h;
	}
	printf("%.2lf",sum_GPA/sum_score);
	return 0;
}
