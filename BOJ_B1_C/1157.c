#include <stdio.h>
#include <stdlib.h>

#define N 1000000

int main() {
	char* s = malloc(sizeof(char) * N);
	scanf("%s", s);
	int* c[26];
	for (int i = 0; i < 26; i++) {
		c[i] = 0;
	}
	int n = -1;
	while (s[++n]) {
		s[n] -= s[n] > 96 ? 97 : 65;
		c[s[n]] += 1;
	}
	int m = 0;
	for (int i = 0; i < 26; i++) {
		m = (c[i] > m) ? c[i] : m;
	}
	for (int i = 0; i < 26; i++) {
		if (c[i] == m) {
			for (int j = i+1; j < 26; j++) {
				if (c[j] == m) {
					m = -2;
					break;
				}
			}
			if (m != -2) {
				m = i;
			}
			break;
		}
	}
	printf("%c", m + 65);
	return 0;
}