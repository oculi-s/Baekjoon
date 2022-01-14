#include <stdio.h>

int n, m, k, b[12][12], c[12][12], i, j, a;

void _r(int v, int d, int c[12][12]){
	int i, j;
	if (d == k){
		if (v > a)
			a = v;
	} else if (d < k) {
		for (i=1; i<=n; i++)
			for (j=1; j<=m; j++)
				if (c[i][j])
					if (c[i-1][j] && c[i+1][j] && c[i][j-1] && c[i][j+1])
						c[i][j] = 0, _r(v+b[i][j], d+1, c), c[i][j] = 1;
	}
}

int main(){
	scanf("%d %d %d", &n, &m, &k);
	a = -1000000;
	for (i=0; i<=n+1; i++)
		for (j=0; j<=m+1; j++)
			c[i][j] = 1;
	for (i=1; i<=n; i++)
		for (j=1; j<=m; j++)
			scanf("%d", &(b[i][j]));
	_r(0, 0, c);
	printf("%d", a);
	return 0;
}
