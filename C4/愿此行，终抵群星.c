#include<stdio.h>
typedef struct aStar{
	int x;
	int y;

}Star;
int main()
{
	int num,n,op=1;
	Star star[1000];
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
		scanf("%d",&n);
		for(int j=0;j<n;j++)
		{
			scanf("%d %d\n",&star[j].x,&star[j].y);
		}
		for(int j=0;j<n-1;j++)
		{
			if(star[j].x==star[j+1].x)
			{
				printf("Case #%d: Stop somewhere.\n",i+1);
				op=0;
				break;
			}
		}
		if(op==1){
        printf("Case #%d: Through the star sea.\n",i+1);
		}
	}
	return 0;
}
