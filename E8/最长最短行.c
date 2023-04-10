#include<stdio.h>
#include<string.h>
#include<limits.h>


typedef struct aSentence{
	char ch[1005];
	int length;
}Sentence;

Sentence sentence[10000];

int main()
{
	int i=0;
	int min=INT_MAX,max=INT_MIN;
	int maxcode=0,mincode=0;
	while(gets(sentence[i].ch)!=NULL)
	{
		sentence[i].length=strlen(sentence[i].ch);
		if(sentence[i].length>max){maxcode=i;max=sentence[i].length;}
		if(sentence[i].length<min){mincode=i;min=sentence[i].length;}
		i++;
	}
	printf("%d\n%s\n%d\n%s\n",min,sentence[mincode].ch,max,sentence[maxcode].ch);
	return 0;
}
