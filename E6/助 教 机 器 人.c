#include<stdio.h>
#include<string.h>
#define str1 "���̣��ҵĴ��������ǶԵģ�Ϊʲô����ȥWA�ˣ�"
#define str2 "���̣��ҵĴ���Ϊʲô����ȥ��������"
#define str3 "����,�ҵĴ���REG����ô���£�"
#define str4 "�����ҵĴ���OE�ˡ�"
#define str5 "�����ҵĴ���CE�ˡ�"
#define str6 "�����ҵĴ���ʲô���������"




int main()
{
	char ch[100];
	while(gets(ch)!=NULL)
	{
		if(strcmp(ch,str1)==0){printf("���ض��˾��Ƕ��ˣ�����ȥWA˵������������⡣\n");}
		else if(strcmp(ch,str2)==0){printf("���Ե��ԡ�\n");}
		else if(strcmp(ch,str3)==0){printf("SIGESGV��Լ������Խ����,SIGFPE��Լ�ǳ������ˡ�\n");}
		else if(strcmp(ch,str4)==0){printf("��Լ������Խ���ˡ�\n");}
		else if(strcmp(ch,str5)==0){printf("�ٶ�һ�±�����Ϣ��\n");}
		else if(strcmp(ch,str6)==0){printf("��������ѭ���ˣ������ʾprocess exited with return value 3221225477�ȷ����������԰ٶȰٶ�������ֵ�Я���Ĵ�����Ϣ��\n");}
		else{printf("PARDON?\n");}
		
		
		
		
	}
	
	
	
	
	return 0;
}
