#include <stdio.h>
#include <stdlib.h>

int n, m, a[500000], b[500000], i, j, c, e;
int _c(int *a, int *b){
	return *a-*b;
}

int main(){
	scanf("%d %d", &n, &m);
	for (i=0; i<n; i++)
		scanf("%d", a+i);
	for (i=0; i<m; i++)
		scanf("%d", b+i);
	qsort(a, n, sizeof(int), _c);
	qsort(b, m, sizeof(int), _c);
	for (i=0; i<n; i++){
		for (j=e; b[j]<=a[i] && j<m; j++)
			if (a[i] == b[j]){
				e = j;
				a[i] = 0;
				break;
			}
		if (a[i])
			c++;
	}
	printf("%d\n", c);
	for (i=0; i<n; i++)
		if (a[i])
			printf("%d ", a[i]);
	return 0;
}
