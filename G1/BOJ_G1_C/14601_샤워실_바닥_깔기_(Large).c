#include <stdio.h>
#include <math.h>

int m[129][129], k, x, y, i, j, p, a, b, c, d, t;

void _r(int y, int x, int p, int e){
	int i, j, d;
	if (p == 2){
		c++;
		for (i=y; i<y+2; i++)
			for (j=x; j<x+2; j++)
				if (m[i][j] != -1)
					m[i][j] = c;
	}
	else{
		p/=2;
		for (d=0; d<4; d++)
			if (d != 3-e)
				_r(y+p*(d/2), x+p*(d%2), p, d);
		_r(y+p/2, x+p/2, p, e);
	}
}

int main(){
	scanf("%d\n%d %d", &k, &x, &y);
	c = 0;
	p = (int)pow(2, k);
	y= p+1-y;
	m[y][x] = -1;
	t = p, a = 1, b = 1;
	while(t >= 2){
		d = 2*(y>(t/2))+(x>t/2);
		_r(a, b, t, 3-d);
		t /= 2;
		y -= (d/2)*t;
		x -= (d%2)*t;
		a += (d/2)*t;
		b += (d%2)*t;
	}
	for (i=1; i<=p; i++){
		for (j=1; j<=p; j++)
			printf("%d ", m[i][j]);
		printf("\n");
	}
	return 0;
}	
