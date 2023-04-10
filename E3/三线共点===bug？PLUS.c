#include<stdio.h>
#include<stdbool.h>
typedef struct aLine{
	int A;
	int B;
	int C;
}Line;

bool check(Line bline,Line cline)
{
	if(bline.A*cline.B==bline.B*cline.A&&!(bline.A*cline.C==bline.C*cline.A&&bline.B*cline.C==bline.C*cline.B))
	return true;
	else
	return false;
}

int main()
{
	Line line[3];
	long int n;
	scanf("%ld",&n);
	long int i,j;
	long long int x,y;
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d %d %d",&line[j].A,&line[j].B,&line[j].C);	
		}
	
	x =-(line[2].A*line[1]. B-line[2]. B*line[1].A)*line[0].C;
	y = (line[2].A*line[0]. B-line[2]. B*line[0].A)*line[1].C;
	if(check(line[0],line[1])||check(line[1],line[2])||check(line[0],line[2]))
	printf("A nice test data ~\n");
	else if(x+y==(line[1].A*line[0]. B-line[1]. B*line[0].A)*line[2].C)
	printf("Could be a bug!\n");
	else
	printf("A nice test data ~\n");
	
	}
	
	return 0; 
	
}
