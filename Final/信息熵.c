#include<stdio.h>
#include<math.h>
#include<string.h>

char ch[1005];




typedef struct Arnmd{
	double I;
	int code;
	int times;
}Rnmd;

void bubbleSortPLUS(Rnmd a[], int n) {
	int i, j, flag;
	Rnmd hold;
	
	for (i = 0; i < n - 1; i++) {
		flag = 0;
		for ( j = 0; j < n - 1 - i; j++)  {
			if (a[j].I > a[j + 1].I) {
				hold = a[j];
				a[j] = a[j + 1];
				a[j + 1] = hold;
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
}
Rnmd rnmd[27];


int main()
{
	gets(ch);
	double p=0;
	double H=0;
	int len=strlen(ch);
	for(int i=0;i<26;i++)
	{
		rnmd[i].code=0;
		rnmd[i].times=0;
		rnmd[i].I=0;
	}	
	for(int i=0;i<len;i++)
	{
		rnmd[ch[i]-97].times++;
	}
	for(int i=0;i<26;i++)
	{
		rnmd[i].code=i;
		//printf("%d",rnmd[i].code);
		p=rnmd[i].times/(double)len;
		//printf("%.2lf\n",p);
		rnmd[i].I=-log(p)/log(2);
		
		H+=rnmd[i].I*p;
	}	
	bubbleSortPLUS(rnmd,26);
	printf("%.2lf\n",H);
	for(int i=0;i<10;i++)
	{
		printf("%c:%.2lf\n",rnmd[i].code+97,rnmd[i].I);
	}
	//printf("%c:%.2lf\n",rnmd[21].code+97,rnmd[21].I);
	return 0;
}
