#include <stdio.h>

short t[100];
int main() {
	short n, k, i, s = 0, m;
	scanf("%hd %hd", &n, &k);
	for (i = 0; i < n; i++)
		scanf("%hd", t + i);
	for (i = 0; i < k; i++)
		s += t[i];
	m = s;
	for (i = 0; i < n - k; i++)
		s += t[i + k] - t[i], m = s > m ? s : m;
	printf("%hd", m);
	return 0;
}