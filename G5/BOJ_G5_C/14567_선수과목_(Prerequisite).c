#include <stdio.h>

int n, m, i, j, x, y, a[1001][1001], b[1001][1001], t;
int main(){
	scanf("%d %d", &n, &m);
	for (i=0; i<m; i++){
		scanf("%d %d", &x, &y);
		a[y][x] = 1, b[y][x] = 1;
	}
	while (m){
		t++;
		m = 0;
		for (i=1; i<=n; i++)
			for (j=1; j<=n; j++)
				a[i][j] = b[i][j], m += b[i][j];
		for (i=1; i<=n; i++){
			if (!a[i][0]){
				for (j=1; j<=n; j++)
					if (a[i][j])
						break;
				if (j > n){
					a[i][0] = t;
					for (j=1; j<=n; j++)
						b[j][i] = 0;
				}
			}
		}
	}
	for (i=1; i<=n; i++)
		printf("%d ", a[i][0]);
	return 0;
}
