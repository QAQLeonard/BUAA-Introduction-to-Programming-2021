#include<stdio.h>
#include<string.h>
#include <stdlib.h>  

char *point[200];

void exchange(char **p1,char **p2)
{
	char **temp=(char **) malloc( sizeof(char) *100);
	*temp=*p1;
	*p1=*p2;
	*p2=*temp;
	//printf("%s\n",*p1);
	//printf("%s\n",*p2);

}


int main()
{
	int n,m,l1,l2;
	scanf("%d %d ",&n,&m);
	
	
	for(int i=0;i<n;i++)
	{
		point[i] = (char *) malloc( sizeof(char) *100); 
		gets(point[i]);
	}
	for(int i=0;i<m;i++)
	{
		scanf("%d %d",&l1,&l2);
		exchange(&point[l1-1],&point[l2-1]);
	}

	for(int i=0;i<n-1;i++){printf("%s\n",point[i]);}
	printf("%s",point[n-1]);
	return 0;
}
