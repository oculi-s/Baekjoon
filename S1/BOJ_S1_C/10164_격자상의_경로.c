#include <stdio.h>

int m[20][20], x, y, k, a, b, i, j;
int main(){
	scanf("%d %d %d", &y, &x, &k);
	a = k%x, b = (k+x-1)/x, m[1][1] = 1;
	if (k && !a)
		a = x;
	for (i=1; i<=b; i++)
		for (j=1; j<=a; j++)
			m[i][j] += m[i-1][j] + m[i][j-1];
	for (i=a; i<=x; i++)
		m[b][i] = m[b][a];
	for (i=b; i<=y; i++)
		m[i][a] = m[b][a];
	for (i=b+1; i<=y; i++)
		for (j=a+1; j<=x; j++)
			m[i][j] += m[i-1][j] + m[i][j-1];
	printf("%d", m[y][x]);
	return 0;
}
