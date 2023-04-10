#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void initialize(char ch[],int *len)
{
	for(int i=0;i<*len;i++)
	{
		if(ch[i]<65||(ch[i]>90&&ch[i]<97)||ch[i]>122)
		{
			for(int j=i;j<*len-1;j++)
			{
				ch[j]=ch[j+1];
			}
			ch[*len-1]='\0';
			*len=*len-1;
			i--;
		}
	}	
	
	for(int i=0;i<*len;i++)
	{
		if(ch[i]>64&&ch[i]<91){ch[i]+=32;}
	}
}

bool check(char ch[],int lenn)
{
	for(int i=0;i<(lenn/2);i++)
	{
		if(ch[i]!=ch[lenn-i-1]){return false;}
	}
	return true;
}




int main()
{
	char ch[100];
	int length,n;
	scanf("%d",&n);
	for(int j=0;j<n;j++)
	{
		scanf("%s",ch);
		length=strlen(ch);
		initialize(ch,&length);
		if(check(ch,length)){printf("P1@lin&r0rne\n");}
		else if(!check(ch,length)){printf("$tr1ng\n");}
	}

	return 0;
}
