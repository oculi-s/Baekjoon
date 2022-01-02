#include <stdio.h>
	
int n, m, i, j, c, r;
char b[50][51];
int main(){
	scanf("%d %d", &n, &m);
	for (i = 0; i<n; i++){
		scanf("%s", b[i]);
	}
	for (i = 0; i<n; i++){
		for (j = 0; j<m; j++)
			if (b[i][j] == 'X')
				break;
		if (j == m)
			r++;
	}
	for (j = 0; j<m; j++){
		for (i = 0; i<n; i++)
			if (b[i][j] == 'X')
				break;
		if (i == n)
			c++;
	}
	printf("%d", c>r?c:r);
	return 0;
}
