#include <stdio.h>

int n, m, i, j, k, l, s, c[27], d[27];
char a[1000][29], b[27], e[27];
int main(){
	scanf("%d\n%d", &m, &n);
	scanf("%s", b+1);
	for (i=0; i<n; i++){
		scanf("%s", a[i]+1);
		if (a[i][1] == '?')
			s = i;
	}
	for (i=1; i<=m; i++){
		k = i;
		for (j=0; j<s; j++){
			if (a[j][k-1] == '-')
				k--;
			else if (a[j][k] == '-')
				k++;
		}
		c[k] = i, l = b[i]-'A'+1, k = i;
		for (j=n-1; j>s; j--){
			if (a[j][k-1] == '-')
				k--;
			else if (a[j][k] == '-')
				k++;
		}
		d[k] = l;
	}
	for (i=1; i<=m; i++){
		if (c[i+1] == d[i] && d[i+1] == c[i])
			e[i] = '-', d[i+1] = c[i+1], d[i] = c[i];
		else if (c[i] == d[i])
			e[i] = '*';
		else
			break;
	}
	if (i < m+1)
		for (i=1; i<=m; i++)
			e[i] = 'x';
	e[m] = 0;
	printf("%s", e+1);
	return 0;
}
