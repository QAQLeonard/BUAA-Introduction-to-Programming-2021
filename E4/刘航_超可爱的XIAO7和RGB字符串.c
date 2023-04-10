#include <stdio.h>
#include <string.h>

int main() {
	char ch[103];//输入字符串
	scanf("%s", ch);
	int n = strlen(ch),a=0,min=100,t;//字符串长度
	
	for (int i = 0; i < n ; i++) 
	{//穷举r的个数
		
		for (int j = 0; j < n - i; j++) 
		{//进而穷举j的个数
			
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
