#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
	char ch1[100],ch2[100];
    bool b=false;
	gets(ch1);
	gets(ch2);
	if(strlen(ch2)>strlen(ch1)){printf("NO\n");return 0;}
	int length2=strlen(ch2),length1=strlen(ch1);
	for(int i=0;i<=length1-length2;i++)
	{
		b=false;
		
		if(ch2[0]==ch1[i])
		{
			b=true;
			for(int j=0;j<length2;j++)
			{
				if(ch2[j]!=ch1[i+j])
				{
					b=false;
					break;
				}
			}
		}
		
		if(b)
		{
			printf("YES %d",i);
			return 0;
		}
		
	}
	printf("NO");
	return 0;
}

