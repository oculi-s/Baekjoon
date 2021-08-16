#include <stdio.h>
#include <stdlib.h>

int main() {
	int s, k, i;
	unsigned long long t = 1;
	int v[100];
	scanf("%d %d", &s, &k);
	for (i = 0; i < k; i++)
		v[i] = s / k;
	s %= k;
	for (i = 0; i < s; i++)
		v[i]++;
	for (i = 0; i < k; i++)
		t *= v[i];
	printf("%lld", t);
	return 0;
}