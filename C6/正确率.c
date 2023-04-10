#include<stdio.h>
#include<string.h>
#define ArrayNum (x) (sizeof(x)/sizeof(x[0]))


int main()
{
	char ch[4];
	double sum=0,ac=0;
	while(scanf("%s",ch)!=EOF)
	{
		if(ch[0]=='A'){ac++;sum++;}
		else if(ch[0]=='C'&&ch[1]=='E'){continue;}
		else{sum++;}
	}
	printf("%.3lf",ac/sum);
	return 0;
}
