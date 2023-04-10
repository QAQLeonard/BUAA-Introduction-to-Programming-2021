#include <stdio.h>
#include <string.h>
int a[100005], b[100005], c[200010]; //全局数组会默认为0；
char A[200010], B[200010], C[200010];

void multiply(char A[], char B[], char C[])
{ // C=A*B
	int La, Lb;
	La = strlen(A);
	Lb = strlen(B);

	for (int i = 0; i < La; i++)
	{
		a[i] = A[La - 1 - i] - '0'; //将第一个数用整型数组保存
	}
	for (int i = 0; i < Lb; i++)
	{
		b[i] = B[Lb - 1 - i] - '0'; //将第二个数用整型数组保存
	}

	int m;

	for (int i = 0; i <= Lb - 1; i++)
	{
		for (int j = 0; j <= La - 1 && b[i] > 0; j++)
		{
			if (a[j] != 0)
			{
				m = a[j] * b[i];	// a[i]*b[j]代表a[i]*b[j]*10^(i+j)
				c[j + i] += m % 10; // c中i+j位即代表c[i+j]*10^(i+j)；m本身可能大于10，则将个位加到c的i+j位上
				if (c[j + i] >= 10)
				{
					//因为构成同一个数的i,j可能有多个组合，则当该位大于等于10时，需要进位
					c[j + i + 1] += c[j + i] / 10;
					c[j + i] = c[j + i] % 10;
				}
				c[j + i + 1] += m / 10; // m的十位加到c的i+j+1位上
				if (c[j + i + 1] > 10)
				{
					c[j + i + 2] += c[j + i + 1] / 10;
					c[j + i + 1] = c[j + i + 1] % 10;
				}
			}
		}
	}

	for (int i = 1001; i >= 0; i--)
	{
		//找到数字c的长度
		if (c[i] > 0)
		{
			m = i;
			break;
		}
	}

	for (int i = m; i >= 0; i--)
	{
		C[m - i] = c[i] + '0';
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	while (n--)
	{
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		memset(c, 0, sizeof(c));
		memset(C, 0, sizeof(C));
		scanf("%s", A);
		scanf("%s", B);
		multiply(A, B, C);
		printf("%s\n", C);
	}

	return 0;
}
