#include <stdio.h>

int n, k, a, s, e;
int main(){
	scanf("%d %d", &n, &k);
	s = 1, e = s+k-1, a = (s+e)*k/2;
	while (a-s+e+1<=n)
		a-=s, s++, e++, a+=e;
	if (a == n)
		printf("%d", e-s);
	else if (a<=n && n<=a+k)
		printf("%d", e-s+1);
	else
		printf("-1");
	return 0;
}
