#include <stdio.h>
#include <string.h>

int main() {
	char ch[103];//�����ַ���
	scanf("%s", ch);
	int n = strlen(ch),a=0,min=100,t;//�ַ�������
	
	for (int i = 0; i < n ; i++) 
	{//���r�ĸ���
		
		for (int j = 0; j < n - i; j++) 
		{//�������j�ĸ���
			
			for (t = 0; t < i; t++) 
			{
				if (ch[t] != 'r') {a += 1;}
			}
			for (; t < j + i; t++) 
			{
				if (ch[t] != 'g') {a += 1;}
			}
			for (; t < n - 1; t++) 
			{
				if (ch[t] != 'b') {a += 1;}
			}
			
			if (a < min) {min = a;}
			a = 0;
		}

	}
	printf("%d", min);
	return 0;
}
