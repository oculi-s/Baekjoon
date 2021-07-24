#include <stdio.h>

double a[10000];

int main() {
	int N, i, j;
	scanf("%d", &N);
	double t, m = 0;
	for (i = 0; i < N; i++)
		scanf("%lf", a + i);
	for (i = 0; i < N; i++) {
		t = a[i], m = m > t ? m : t;
		for (j = i + 1; j < N; j++)
			t *= a[j], m = m > t ? m : t;
	}
	printf("%.3lf", m);
	return 0;
}