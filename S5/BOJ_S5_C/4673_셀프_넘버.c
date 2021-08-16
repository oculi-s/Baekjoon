#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define M 10000

int main() {
	int S[M], t, s;
	for (int i = 0; i < M; i++) {
		S[i] = 1;
	}
	for (int n = 0; n < M; n++) {
		t = n + 1;
		while (true) {
			s = t;
			while (t > 0) {
				s += t % 10;
				t /= 10;
			}
			if (t == s || M <= s) {
				break;
			}
			S[s] = 0;
			t = s;
		}
	}
	for (int n = 1; n < M; n++) {
		if (S[n] == 1) {
			printf("%d\n", n);
		}
	}
}