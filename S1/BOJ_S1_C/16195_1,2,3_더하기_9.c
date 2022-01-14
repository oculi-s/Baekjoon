#include <stdio.h>
#define N 1000000009

typedef long long Int;
Int t, i, v, n, m, a[1002][1004];
int main(){
	a[1][1] = 1, a[1][2] = 1, a[1][3] = 1;
	for (n=1; n<=1000; n++){
		for (m=1; m<=n; m++)
			a[m][n] %= N, a[m+1][n+1] += a[m][n], a[m+1][n+2] += a[m][n], a[m+1][n+3] += a[m][n];
	}	
	scanf("%lld", &t);
	while(t--){
		v = 0;
		scanf("%lld %lld", &n, &m);
		for (i=1; i<=m; i++)
			v += a[i][n], v %= N;
		printf("%lld\n", v);
	}
	return 0;
}
