#include <stdio.h>

int t, n, m, a, b;
int main(){
	scanf("%d", &t);
	m = 100000;
	while(t--)
		scanf("%d %d", &a, &b), n = n>a?n:a, m = m<b?m:b;
	printf("%d", n>m?n-m:0);
	return 0;
}
