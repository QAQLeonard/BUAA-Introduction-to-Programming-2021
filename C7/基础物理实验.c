#include<stdio.h>


int main()
{
	int id,condition,n,score=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&id,&condition);
		if(condition==0)
		{
			score+=id%10;
		}
		else if(condition==1)
		{
			continue;
		}
		else if(condition==2)
		{
			if(score<=2){score=0;}
			else{score-=2;}
		}
	}
	
	
	if(score>=37){printf("%d",score);}
	else{printf("See you next year !");}
	
	
	return 0;
}
