#include<stdio.h>
#include<string.h>
#define str1 "助教，我的代码样例是对的，为什么交上去WA了？"
#define str2 "助教，我的代码为什么过不去样例啊。"
#define str3 "助教,我的代码REG是怎么回事？"
#define str4 "助教我的代码OE了。"
#define str5 "助教我的代码CE了。"
#define str6 "助教我的代码什么都不输出。"




int main()
{
	char ch[100];
	while(gets(ch)!=NULL)
	{
		if(strcmp(ch,str1)==0){printf("本地对了就是对了，交上去WA说明评测机有问题。\n");}
		else if(strcmp(ch,str2)==0){printf("调试调试。\n");}
		else if(strcmp(ch,str3)==0){printf("SIGESGV大约是数组越界了,SIGFPE大约是除以零了。\n");}
		else if(strcmp(ch,str4)==0){printf("大约是数组越界了。\n");}
		else if(strcmp(ch,str5)==0){printf("百度一下报错信息。\n");}
		else if(strcmp(ch,str6)==0){printf("可能是死循环了，如果显示process exited with return value 3221225477等非零数，可以百度百度这个数字的携带的错误信息。\n");}
		else{printf("PARDON?\n");}
		
		
		
		
	}
	
	
	
	
	return 0;
}
