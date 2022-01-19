#include <stdio.h>
#include <math.h>

int m[5][5], k, x, y, i, j, p, c;

void _r(int y, int x, int p, int e){
	int i, j, d;
	if (p == 2){
		d = 1;
		for (i=y; i<y+2 && d; i++)
			for (j=x; j<x+2 && d; j++)
				if (m[i][j] == -1)
					d = 0;
		if (d) {
			c++;
			for (i=y; i<y+2; i++)
				for (j=x; j<x+2; j++)
					m[i][j] = c;
			if (e==0)
				m[y+1][x+1] = 0;
			else if (e==1)
				m[y][x+1] = 0;
			else if (e==2)
				m[y+1][x] = 0;
			else
				m[y][x] = 0;
		}
	}
	else
		p/=2, _r(y, x, p, 0), _r(y+p, x, p, 1), _r(y, x+p, p, 2), _r(y+p, x+p, p, 3);
}

int main(){
	scanf("%d\n%d %d", &k, &x, &y);
	c = 1;
	for (i=1; i<=4; i++)
		for (j=1; j<=4; j++)
			m[i][j] = c;
	p = (int)pow(2, k);
	m[p+1-y][x] = -1;
	_r(1, 1, p, 0);
	for (i=1; i<=p; i++)
		for (j=1; j<=p; j++)
			if (!m[i][j])
				m[i][j] = c+1;
	for (i=1; i<=p; i++){
		for (j=1; j<=p; j++)
			printf("%d ", m[i][j]);
		printf("\n");
	}
	return 0;
}
