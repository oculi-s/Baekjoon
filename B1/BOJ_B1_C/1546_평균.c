#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	float m = 0;
	scanf("%d", &n);
	float *s = malloc(sizeof(float)*n);
	for (int i = 0; i < n; i++) {
		scanf("%f", s+i);
		m = s[i] > m ? s[i] : m;
	}
	float t = 0;
	for (int i = 0; i < n; i++) {
		s[i] *= 100 / m;
		t += s[i];
	}
	printf("%.5f", (float)(t / n));
}