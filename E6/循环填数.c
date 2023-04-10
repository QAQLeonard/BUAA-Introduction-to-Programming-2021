#include<stdio.h>
#include<string.h>

int a[100][100];

int main()
{
	int n,d;
	scanf("%d%d",&n,&d);


	int direction=0;//0向右，1向下，2向左，3向上
	int time=0,i=0,j=0;
	
	while(time<(d*d))
	{
		//printf("yes!");
		a[i][j]=(time+1)-(time/n)*n;
		time++;		
		
		if(direction==0)
		{
			//printf("%d:%d %d %d\n",time,direction,i,j);
			
			if(j==d-1){i++;direction=1;}
			else if(a[i][j+1]!=0){i++;direction=1;}
			else{j++;}

		}

		else if(direction==1)
		{
		    //printf("rnm");			
			//printf("%d:%d %d %d\n",time,direction,i,j);

			if(i==d-1){j--;direction=2;}
			else if(a[i+1][j]!=0){j--;direction=2;}
			else{i++;}			
		}
		
		else if(direction==2)
		{
			//printf("%d:%d %d %d\n",time,direction,i,j);
			if(j==0){i--;direction=3;}
			else if(a[i][j-1]!=0){i--;direction=3;}
			else{j--;}
		}
		
		else if(direction==3)
		{
			//printf("%d:%d %d %d\n",time,direction,i,j);

			if(i==0){j++;direction=0;}
			else if(a[i-1][j]!=0){j++;direction=0;}
			else{i--;}
		}
						
	}
	
	//printf("\n");
	for(int i=0;i<d;i++)
	{
		for(int j=0;j<d;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	
	return 0; 
}
