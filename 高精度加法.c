#include <stdio.h>
#include <string.h>
#define MAX(a,b) a>b?a:b
char A[505], B[505], C[505];
int a[505], b[505], c[505], ans[505];
//int MAX(int a, int b);

void add(char A[], char B[],char C[]) {//C=A+B
	
	int La = strlen(A), Lb = strlen(B); //���������λ��
	for (int i = 0; i < La; i++) {
		a[i] = A[La - 1 - i] - '0'; //����һ���������������鱣��
	}
	for (int i = 0; i < Lb; i++) {
		b[i] = B[Lb - 1 - i] - '0'; //���ڶ����������������鱣��
	}
	int L = MAX(La, Lb); //��¼��Ҫ������Ĵ���
	for (int i = 0; i <= L; i++) {
		ans[i] = a[i] + b[i] + c[i]; //���мӷ�����
		if (ans[i] > 9) {
			//�ж��Ƿ���Ҫ��λ
			c[i + 1] = ans[i] / 10;
//�������������ļӷ����ֻ�ܽ�һλ,��������Ҳ�����Ż�Ϊc[i + 1] = 1;
			ans[i] = ans[i] % 10;
		}
	}
	if (c[L]) {
		for (int i = L; i >= 0; i--)
			C[L - i] = ans[i] + '0';
	} else {
		for (int i = L - 1; i >= 0; i--)
			C[L - 1 - i] = ans[i] + '0';
	}

}




