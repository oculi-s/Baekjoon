#include <stdio.h>
#include <stdlib.h>

int _c(int *a, int *b){
	return *a-*b;
}

int a[500000], n, i;
int main(){
	scanf("%d", &n);
	for (i=0; i<n; i++)
		scanf("%d", a+i);
	qsort(a, n, sizeof(int), _c);
	for (i=0; i<n; i++)
		printf("%d ", a[i]);
	return 0;
}
