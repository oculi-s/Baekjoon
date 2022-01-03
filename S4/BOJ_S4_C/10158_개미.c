#include <stdio.h>

int w, h, x, y, t, dx = 1, dy = 1;

int main(){
	scanf("%d %d\n%d %d\n%d", &w, &h, &x, &y, &t);
	x += t, y += t;
	x = (x / w) % 2 ? w - x % w : x % w;
	y = (y / h) % 2 ? h - y % h : y % h;
	printf("%d %d", x, y);
	return 0;
}
