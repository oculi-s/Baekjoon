#include <stdio.h>
#define N 505

int n, m, a[N][N], b[N][N], c, d[N*N], i, j;
void _r(int i, int j){
	if (!b[i][j]){
		b[i][j] = 1, d[c]++;
		if (a[i+1][j])
			_r(i+1, j);
		if (a[i][j+1])
			_r(i, j+1);
		if (a[i-1][j])
			_r(i-1, j);
		if (a[i][j-1])
			_r(i, j-1);
	}
}

int main(){
	scanf("%d %d", &n, &m);
	for (i=1; i<=n; i++)
		for (j=1; j<=m; j++)
			scanf("%d", &(a[i][j]));
	for (i=1; i<=n; i++)
		for (j=1; j<=m; j++)
			if (a[i][j]){
				if (!b[i][j])
					c++;
				_r(i, j);
			}
	printf("%d\n", c);
	m = 0;
	for (i=1; i<=c; i++)
		m = d[i]>m?d[i]:m;
	printf("%d", m);
	return 0;
}
