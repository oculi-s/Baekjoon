#include <stdio.h>

int t, n, k, i, j, a[2][101][101];
int main(){
	scanf("%d", &t);
	a[1][1][0] = 1, a[0][1][0] = 1;
	for (i=2; i<=100; i++)
		for (j=0; j<=i; j++){
			a[0][i][j] = a[0][i-1][j] + a[1][i-1][j];
			a[1][i][j] = a[0][i-1][j];
			if (j)
				a[1][i][j] += a[1][i-1][j-1];
		}
	while(t--){
		scanf("%d %d", &n, &k);
		printf("%d\n", a[0][n][k] + a[1][n][k]);
	}
	return 0;
}
