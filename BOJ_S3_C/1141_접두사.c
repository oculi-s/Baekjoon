#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define M 60

void _qsort(char s[M][M], int n) {
	if (n) {
		int L = 1, H = n - 1;
		char t[50];
		while (L) {
			while (L < n && strcmp(s[0],s[L]) >= 0) { L++; }
			while (0 < H && strcmp(s[0],s[H]) <= 0) { H--; }
			if (L >= H)
				L = 0;
			strcpy(t, s[L]), strcpy(s[L], s[H]), strcpy(s[H], t);
		}
		_qsort(s, H), _qsort(s + H + 1, n - H - 1);
	}
}

bool _part(char* a, char* b) {
	int i = 0;
	while (a[i] == b[i] && a[i] >= 'a')
		i++;
	return a[i] < 'a';
}

int main() {
	int n, i, c;
	char s[M][M] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%s", s[i]);
	_qsort(s, n), c = n;
	for (i = 0; i < n - 1; i++)
		if (_part(s[i], s[i + 1]))
			c--;
	printf("%d", c);
	return	0;
}