#include <stdio.h>
int add(int);
int qpow(int, int, int);
int isprime(int);
int max_prime = 2, L, sum, t, i1;

int isj(int h) {
	if (isprime(h) == 1) {
		max_prime++;
		printf("%d\n",h);
		return h;
	} else

	{
		max_prime++;
		return isj(max_prime);
	}
}

int main() {
	scanf("%d", &L);
	t = add(L);
	printf("\n\n%d", t);
	return 0;
}

int add(int a) {
	for (sum = 0; sum <= a; sum += isj(max_prime)) {
		//printf("%d\n", max_prime - 1);
		i1++;
	}
	return i1-1;
}


int isprime(int n) { //返回1表示n为素数，0表示n不是素数
	if (n == 2 || n == 3) return 1;
	if (!(n & 1) || n == 1 || n <= 0) return 0;
	int m = n - 1, a, tmp, ans, cnt = 0;
	while (!(m & 1))
		m >>= 1, cnt++;
	int rd = 20011224, seed = 998244353, seed2 = 20217371;
	int i;
	for (i = 0; i < 20; i++) {
		rd = rd * seed + seed2;
		if (rd < 0) rd = -rd;
		a = rd % (n - 1) + 1;
		//验证费马小定理的逆定理
		tmp = qpow(a, m, n);
		int j;
		for (j = 0; j < cnt; j++) {
			ans = 1ll * tmp * tmp % n;
			if (ans == 1) {
				if (tmp != 1 && tmp != n - 1)
					return 0;
				break ;
			}
			tmp = ans;
		}
		if (ans != 1) return 0;
	}
	return 1;
}
int qpow(int a, int b, int p) {
	//求(a^b) mod p 在isprime函数中会用到
	int ret = 1;
	while (b) {
		if (b & 1) ret = 1ll * ret * a % p;
		a = 1ll * a * a % p, b >>= 1;
	}
	return ret;
}
