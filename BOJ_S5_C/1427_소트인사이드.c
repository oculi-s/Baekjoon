#include <stdio.h>

void _qsort(char* s, int n) {
	if (n > 0) {
		int L = 1, H = n - 1, t;
		while (L) {
			while (L < n && s[0] <= s[L]) { L++; }
			while (0 < H && s[0] >= s[H]) { H--; }
			if (L >= H)
				L = 0;
			t = s[L], s[L] = s[H], s[H] = t;
		}
		_qsort(s, H), _qsort(s + H + 1, n - H - 1);
	}
}

int main() {
	char s[20];
	scanf("%s", s);
	int l = 0; 
	while (s[l++]);
	_qsort(s, l - 1);
	printf("%s", s);
}