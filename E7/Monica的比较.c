#include<stdio.h>
#include<string.h>
#define max(A,B) (A) > (B) ? (A) : (B)
int main()
{
	char ch1[1000],ch2[1000];
	int n,length,ans=0;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	{
		
		gets(ch1);
		gets(ch2);
		//puts(ch1);
		//printf("\n");
		//puts(ch2);
		//printf("\n");		
		length=max(strlen(ch1),strlen(ch2));
		//printf("%d",length);
		for(int j=0;j<length;j++)
		{
			if(ch1[j]!=ch2[j]){ans++;}
		}
		printf("%d\n",ans);
		ans=0;
		
	}
}
