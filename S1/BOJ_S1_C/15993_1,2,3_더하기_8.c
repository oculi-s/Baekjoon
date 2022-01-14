#include <stdio.h>
#define N 1000000009

typedef long long Int;
Int t, i, n, a[2][100004];
int main(){
	a[0][1] = 1, a[0][2] = 1, a[0][3] = 1;
	for (n=1; n<=100000; n++){
		a[0][n] %= N, a[1][n+1] += a[0][n], a[1][n+2] += a[0][n], a[1][n+3] += a[0][n];
		a[1][n] %= N, a[0][n+1] += a[1][n], a[0][n+2] += a[1][n], a[0][n+3] += a[1][n];
	}	
	scanf("%lld", &t);
	while(t--)
		scanf("%lld", &n), printf("%lld %lld\n", a[0][n], a[1][n]);
	return 0;
}
