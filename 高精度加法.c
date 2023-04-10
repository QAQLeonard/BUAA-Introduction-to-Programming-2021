#include <stdio.h>
#include <string.h>
#define MAX(a,b) a>b?a:b
char A[505], B[505], C[505];
int a[505], b[505], c[505], ans[505];
//int MAX(int a, int b);

void add(char A[], char B[],char C[]) {//C=A+B
	
	int La = strlen(A), Lb = strlen(B); //计算加数得位数
	for (int i = 0; i < La; i++) {
		a[i] = A[La - 1 - i] - '0'; //将第一个加数用整型数组保存
	}
	for (int i = 0; i < Lb; i++) {
		b[i] = B[Lb - 1 - i] - '0'; //将第二个加数用整型数组保存
	}
	int L = MAX(La, Lb); //记录需要加运算的次数
	for (int i = 0; i <= L; i++) {
		ans[i] = a[i] + b[i] + c[i]; //进行加法运算
		if (ans[i] > 9) {
			//判断是否需要进位
			c[i + 1] = ans[i] / 10;
//由于两个加数的加法最多只能进一位,这里我们也可以优化为c[i + 1] = 1;
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




