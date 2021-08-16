#include <stdio.h>
#include <stdlib.h>

int main() {
	int m, n, i, j, k;
	scanf("%d %d", &m, &n);
	int * s = malloc(sizeof(int) * (n + 1));
	s[1] = 0;
	for (i = 2; i < n + 1; i++)
		s[i] = i;
	for (i = 2; i < n - 1; i++)
		if (s[i])
			for (j = i * 2; j < n + 1; j += i)
				s[j] = 0;
	for (i = m; i < n + 1; i++)
		if (s[i])
			printf("%d\n", i);
	return 0;
}
//
//
//int main() {
//	int m, n, i, j, k;
//	scanf("%d %d", &m, &n);
//	int* s = malloc(sizeof(int) * (n - 1));
//	for (i = 2; i < n + 1; i++)
//		s[i - 2] = i;
//	for (i = 0; i < n - 1; i++)
//		for (j = 0; j < i; j++)
//			if (s[j])
//				if ((s[i] % s[j]) == 0) {
//					s[i] = 0;
//					break;
//				}
//	i = 0;
//	while (s[++i] < m && s[i]) {};
//	for (; i < n - 1; i++)
//		if (s[i])
//			printf("%d\n", s[i]);
//	return 0;
//}
