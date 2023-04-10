#include<stdio.h>
#include<stdbool.h>

bool triangle(int a,int b,int c)
{
	if(a+b<c||a+c<b||b+c<a){return false;}
	return true;
}

bool equilateral(int a,int b,int c)
{
	if(a==b&&b==c){return true;}
	return false;
}

bool isosceles(int a,int b,int c)
{
	if(a==b||a==c||b==c){return true;}
	return false;
}


int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(!triangle(a,b,c))
	{
		printf("not a triangle!");
		return 0;
	}
	else if(equilateral(a,b,c))
	{
		printf("equilateral triangle!");
		return 0;
	}
	else if(isosceles(a,b,c))
	{
		printf("isosceles triangle!");
		return 0;
	}
	else
	{
		printf("regular triangle!");
		return 0;
	}
}
