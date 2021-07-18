#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	if (t % 10)
		printf("-1");
	else {
		printf("%d ", t / 300);
		t %= 300;
		printf("%d ", t / 60);
		t %= 60;
		printf("%d", t / 10);
	}
	return 0;
}