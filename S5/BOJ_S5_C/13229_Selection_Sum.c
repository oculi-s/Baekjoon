#include <stdio.h>

int a[100001], s[100001], i, n, b, c;
int main(){
	scanf("%d", &n);
	for (i=1; i<=n; i++)
		scanf("%d", a+i), s[i] = a[i];
	for (i=1; i<=n; i++)
		s[i] += s[i-1];
	scanf("%d", &n);
	for (i=0; i<n; i++)
		scanf("%d %d", &b, &c), printf("%d\n", s[c+1]-s[b]);
	return 0;
}
