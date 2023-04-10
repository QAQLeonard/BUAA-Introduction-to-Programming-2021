#include<stdio.h>
#include<string.h>
int main()
{
	char ch[777];
	scanf("%s",ch);
	int len=strlen(ch);
	
	for(int i=0;i<len;i++)
	{
		if(ch[i]=='E'&&i<=len-5)
		{
			if(ch[i+1]=='D'&&ch[i+2]=='G'&&ch[i+3]=='n'&&ch[i+4]=='b')
			{
				printf("%d",i+1);
				return 0;
			}
		}
		
		
	}
	
	printf("-1");
	return 0;
	
	
}
