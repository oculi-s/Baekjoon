#include <stdio.h>

int n, a[64][64], b[64][64], i, j, c;
void _r(int x, int y){
	int v = a[y][x];
	b[y][x] = 1;
	if (v > 0){
		if (x+v < n && !b[y][x+v])
			_r(x+v, y);
		if (y+v < n && !b[y+v][x])
			_r(x, y+v);
	}
	if (v==-1)
		c = 1;
}

int main(){
	scanf("%d", &n);
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
			scanf("%d", &(a[i][j]));
	_r(0, 0);
	printf("%s", c?"HaruHaru":"Hing");
	return 0;
}
