#include <stdio.h>
#include <string.h>
int a[100005], b[100005], c[200010]; //ȫ�������Ĭ��Ϊ0��
char A[200010], B[200010], C[200010];

void multiply(char A[], char B[], char C[])
{ // C=A*B
	int La, Lb;
	La = strlen(A);
	Lb = strlen(B);

	for (int i = 0; i < La; i++)
	{
		a[i] = A[La - 1 - i] - '0'; //����һ�������������鱣��
	}
	for (int i = 0; i < Lb; i++)
	{
		b[i] = B[Lb - 1 - i] - '0'; //���ڶ��������������鱣��
	}

	int m;

	for (int i = 0; i <= Lb - 1; i++)
	{
		for (int j = 0; j <= La - 1 && b[i] > 0; j++)
		{
			if (a[j] != 0)
			{
				m = a[j] * b[i];	// a[i]*b[j]����a[i]*b[j]*10^(i+j)
				c[j + i] += m % 10; // c��i+jλ������c[i+j]*10^(i+j)��m������ܴ���10���򽫸�λ�ӵ�c��i+jλ��
				if (c[j + i] >= 10)
				{
					//��Ϊ����ͬһ������i,j�����ж����ϣ��򵱸�λ���ڵ���10ʱ����Ҫ��λ
					c[j + i + 1] += c[j + i] / 10;
					c[j + i] = c[j + i] % 10;
				}
				c[j + i + 1] += m / 10; // m��ʮλ�ӵ�c��i+j+1λ��
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
		//�ҵ�����c�ĳ���
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
