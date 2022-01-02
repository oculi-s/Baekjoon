#include <stdio.h>

int n, i, b[101];
int main(){
	scanf("%d", &n);
	for (i = 1; i<=n; i++)
		scanf("%d", b+i);
	for (i = 1; i<=n; i++)
		printf("%d ", b[i]*i-b[i-1]*(i-1));
	return 0;
}
