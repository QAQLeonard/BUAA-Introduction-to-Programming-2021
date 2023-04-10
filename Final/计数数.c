#include<stdio.h>
#include<string.h>


char ch[1000005];

int main()
{
	gets(ch);
	int len=strlen(ch);
	int point;
	int ans=0;
	for(point=0;point<len-3;point++)
	{
		if(ch[point]=='t'&&ch[point+1]=='w'&&ch[point+2]=='o')
		{
			ans+=2;
			point+=2;
		}
		else if(ch[point]=='t'&&ch[point+1]=='h'&&ch[point+2]=='r'&&ch[point+3]=='e'&&ch[point+4]=='e')
		{
			ans+=3;
			point+=4;
		}
		else if(ch[point]=='f'&&ch[point+1]=='o'&&ch[point+2]=='u'&&ch[point+3]=='r')
		{
			ans+=4;
			point+=3;
		}	
		else if(ch[point]=='f'&&ch[point+1]=='i'&&ch[point+2]=='v'&&ch[point+3]=='e')
		{
			ans+=5;
			point+=3;
		}		
		else if(ch[point]=='s'&&ch[point+1]=='i'&&ch[point+2]=='x')
		{
			ans+=6;
			point+=2;
		}		
			
	}
	
	printf("%d",ans);
	
}
