#include<stdio.h>


int main()
{
	long long int n,l,sum=0;
	char type[15];
	scanf("%lld%lld ",&n,&l);
	for(int i=1;i<=n;i++)
	{
	    for(int j=0;j<15;j++){type[j]='\0';}
		gets(type);
	    if(type[0]=='c'){sum++;}
	    else if(type[0]=='i'){sum+=4;}
	    else if(type[0]=='l'||type[0]=='d'){sum+=8;}
	    else{continue;}
	}
	printf("%lld",sum*l);
	return 0;
}
