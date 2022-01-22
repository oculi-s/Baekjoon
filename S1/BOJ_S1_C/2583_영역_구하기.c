#include <stdio.h>

int a[100][100], b[10000], e;
int m, n, k, x1, x2, y1, y2;

void _pas(){
	int i, j;
	for (i=y1; i<y2; i++)
		for (j=x1; j<x2; j++)
			a[i][j] = 1;
}

void _spa(int i, int j){
	if (!a[i][j]){
		a[i][j] = 1, b[e]++;
		if (i)
			_spa(i-1, j);
		if (i<n-1)
			_spa(i+1, j);
		if (j)
			_spa(i, j-1);
		if (j<m-1)
			_spa(i, j+1);
	}
}

int _c(int *a, int *b){
	return *a-*b;
}

int main(){
	int i, j;
	scanf("%d %d %d", &n, &m, &k);
	while(k--){
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		_pas();
	}
	for (i=0; i<n; i++)
		for (j=0; j<m; j++)
			if (!a[i][j])
				_spa(i, j), e++;
	printf("%d\n", e);
	qsort(b, e, sizeof(int), _c);
	for (i=0; i<e; i++)
		printf("%d ", b[i]);
	return 0;
}
