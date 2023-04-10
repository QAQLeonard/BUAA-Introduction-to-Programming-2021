#include<stdio.h>
typedef struct aDate{
	int A;
	int B;
}Date;
int main()
{
	int t;
	scanf("%d",&t);
	Date date[t];
	for(int i=0;i<t;i++)
	{
		scanf("%d %d",&date[i].A,&date[i].B);
		//printf("%d %d\n",date[i].A,date[i].B);
	} 
	for(int i=0;i<t;i++)
	{
		//printf("%d %d\n",date[i].A,date[i].B);
		if(date[i].B==1||date[i].B==3||date[i].B==5||date[i].B==7||date[i].B==8||date[i].B==10||date[i].B==12)
		{
			printf("31\n");
		}
		if(date[i].B==4||date[i].B==6||date[i].B==9||date[i].B==11)
		
		{
			printf("30\n");
		}
		if(date[i].B==2)
		{
			if((date[i].A%400)==0||((date[i].A%100)!=0&&(date[i].A%4)==0))
			{
				printf("29\n");
			}
			else
			{
				printf("28\n");
			}
			
		}
	}
	return 0;	
}
