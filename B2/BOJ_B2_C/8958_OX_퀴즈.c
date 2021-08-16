#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		char s[80];
		scanf("%s", s);
		int j = 0, t = 0, c = 0;
		while (s[j]){
			if (s[j] == 'O') {
				t += ++c;
			}
			else {
				c = 0;
			}
			j++;
		}
		printf("%d\n", t);
	}
	return 0;
}