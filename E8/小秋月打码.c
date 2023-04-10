#include<stdio.h>
#include <math.h>
#include <stdlib.h>

double a[101][101];


double calculate(int i, int j, int m, int n) {
	double ans;
	if (i == 0 && j == 0) {
		ans = (a[i][j] + a[i + 1][j] + a[i][j + 1] + a[i + 1][j + 1]) / 4;
	} else if (i == m - 1 && j == 0) {
		ans = (a[i][j] + a[i - 1][j] + a[i][j + 1] + a[i - 1][j + 1]) / 4;
	} else if (i == 0 && j == n - 1) {
		ans = (a[i][j] + a[i + 1][j] + a[i][j - 1] + a[i + 1][j - 1]) / 4;
	} else if (i == m - 1 && j == n - 1) {
		ans = (a[i][j] + a[i - 1][j] + a[i][j - 1] + a[i - 1][j - 1]) / 4;
	} else if (i == 0) {
		ans = (a[i][j + 1] + a[i][j - 1] + a[i + 1][j + 1] + a[i + 1][j - 1] + a[i + 1][j] + a[i][j]) / 6;
	} else if (i == m - 1) {
		ans = (a[i][j + 1] + a[i][j - 1] + a[i - 1][j + 1] + a[i - 1][j - 1] + a[i - 1][j] + a[i][j]) / 6;
	} else if (j == 0) {
		ans = (a[i + 1][j] + a[i - 1][j] + a[i + 1][j + 1] + a[i - 1][j + 1] + a[i][j + 1] + a[i][j]) / 6;
	} else if (j == n - 1) {
		ans = (a[i + 1][j] + a[i - 1][j] + a[i + 1][j - 1] + a[i - 1][j - 1] + a[i][j - 1] + a[i][j]) / 6;
	} else {
		ans = (a[i + 1][j] + a[i + 1][j + 1] + a[i + 1][j - 1] + a[i - 1][j] + a[i - 1][j + 1] + a[i - 1][j - 1] + a[i][j - 1] + a[i][j + 1] + a[i][j]) / 9;
	}
	return round(ans);
}





int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	double y[m][n];

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%lf", &a[i][j]);
		}
	}



	if (m != 1 && n != 1) {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				printf("%3.0lf ", calculate(i, j, m, n));
			}
			printf("\n");
		}
	} else {
		if (m == 1 && n != 1) {
			y[0][0] = (a[0][1] + a[0][0]) / 2;
			y[0][n - 1] = (a[0][n - 1] + a[0][n - 2]) / 2;
			for (int i = 1; i < n - 1; i++) {
				y[0][i] = (a[0][i] + a[0][i + 1] + a[0][i - 1]) / 3;
			}
		} else if (m != 1 && n == 1) {
			y[0][0] = (a[1][0] + a[0][0]) / 2;
			y[m - 1][0] = (a[m - 1][0] + a[m - 2][0]) / 2;
			for (int i = 1; i < n - 1; i++) {
				y[i][0] = (a[i][0] + a[i + 1][0] + a[i - 1][0]) / 3;
			}
		} else if (m == 1 && n == 1) {
			y[0][0] = a[0][0];
		}

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				printf("%3.0lf ", round(y[i][j]));
			}
			printf("\n");
		}
	}
	return 0;
}
