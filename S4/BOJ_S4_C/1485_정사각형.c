#include <stdio.h>

typedef long long Int;
Int t, i, x[4], y[4], c, d, e, f;
Int a[6][2] = {{0,1}, {0,2}, {0,3}, {1,2}, {1,3}, {2,3}};
Int b[6][2] = {{2,3}, {1,3}, {1,2}, {0,3}, {2,0}, {1,0}};

Int _d(Int i, Int j, Int k){
	Int dx = x[b[i][j]] - x[a[i][k]];
	Int dy = y[b[i][j]] - y[a[i][k]];
	return dx*dx+dy*dy;
}

Int _a(Int i, Int j, Int k){
	Int t = (x[b[i][j]] - x[a[i][j]]) * (x[b[i][k]] - x[a[i][k]]);
	t += (y[b[i][j]] - y[a[i][j]]) * (y[b[i][k]] - y[a[i][k]]);
	return t == 0;
}

int main(){
	scanf("%lld", &t);
	while(t--){
		for (i=0; i<4; i++)
			scanf("%lld %lld", x+i, y+i);
		c = 0;
		for (i=0; i<6; i++){
			d = _d(i,0,0);
			if (d == _d(i,1,1)){
				if (_a(i,0,1)){
					e = _d(i,0,1), f = _d(i,1,0);
					if (e+f==d && e==f){
						c = 1;
						break;
					}
				}
			}
		}
		printf("%lld\n", c);		
	}
	return 0;
}
