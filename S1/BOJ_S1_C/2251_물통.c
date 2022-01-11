#include <stdio.h>

int a, b, c, d[201], i;
char s[8000001];

void _r(int x, int y, int z){
	if (!s[40000*x+200*y+z]){
		if (!x)
			d[z] = 1;
		s[40000*x+200*y+z] = 1;
		if (x){
			if (b >= y){
				if (x+y > b)
					_r(x-(b-y), b, z);
				else
					_r(0, x+y, z);
			}
			if (c >= z){
				if (x+z > c)
					_r(x-(c-z), y, c);
				else
					_r(0, y, x+z);
			}
		}
		if (y){
			if (a >= x){
				if (x+y > a)
					_r(a, y-(a-x), z);
				else
					_r(x+y, 0, z);
			}
			if (c >= z){
				if (y+z > c)
					_r(x, y-(c-z), c);
				else
					_r(x, 0, y+z);
			}
		}
		if (z){
			if (a >= x){
				if (x+z > a)
					_r(a, y, z-(a-x));
				else
					_r(x+z, y, 0);
			}
			if (b >= y){
				if (y+z > b)
					_r(x, b, z-(b-y));
				else
					_r(x, y+z, 0);
			}
		}
	}
}
int main(){
	scanf("%d %d %d", &a, &b, &c);
	_r(0, 0, c);
	for (i=0; i<=c; i++)
		if (d[i])
			printf("%d ", i);
	return 0;
}
