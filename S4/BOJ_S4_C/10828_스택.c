#include <stdio.h>
#include <stdlib.h>

int main() {
	int N, i = -1;
	scanf("%d", &N);
	int s[10000], t;
	char o[20];
	for (int _ = 0; _ < N; _++) {
		scanf("%s", o);
		switch (o[1]) {
		case 'u':
			scanf("%d", &t);
			s[++i] = t;
			break;
		case 'o':
			if (i >= 0) {
				printf("%d\n", s[i]);
				if (o[0] == 'p')
					i--;
			}
			else {
				printf("%d\n", -1);
			}
			break;
		case 'm':
			printf("%d\n", i == -1);
			break;
		case 'i':
			printf("%d\n", i + 1);
			break;
		default:
			break;
		}
	}
	return 0;
}
