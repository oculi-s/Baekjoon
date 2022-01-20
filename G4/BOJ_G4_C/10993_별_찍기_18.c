#include <stdio.h>

int n, i, j, v[11], h[11];
char s[1025][2048];

void _r(int y, int x, int n){
	int i;
	if (n%2){
		for (i=0; i<=h[n]/2; i++)
			s[y][x+i] = '*', s[y-i][x+i] = '*';
		for (; i<h[n]; i++)
			s[y][x+i] = '*', s[y-h[n]+i][x+i-1] = '*';
		if (h[n]/4 && v[n]/2)
			_r(y-v[n]/2, x+h[n]/4+1, n-1);
	}
	else{
		for (i=0; i<=h[n]/2; i++)
			s[y][x+i] = '*', s[y+i][x+i] = '*';
		for (; i<h[n]; i++)
			s[y][x+i] = '*', s[y+h[n]-i][x+i-1] = '*';
		if (h[n]/4 && v[n]/2)
			_r(y+v[n]/2, x+h[n]/4+1, n-1);
	}
}

void _trim(char s[2048]){
	int i;
	for (i=2047; i>=0; i--)
		if (s[i]=='*'){
			s[i+1] = 0;
			break;
		}
}

int main(){
	h[1] = 1, v[1] = 1;
	for (i=2; i<=10; i++)
		h[i] = h[i-1]*2+3, v[i] = v[i-1]*2+1;
	scanf("%d", &n);
	for (i=0; i<v[n]; i++)
		for (j=0; j<h[n]; j++)
			s[i][j] = ' ';
	if (n%2)
		_r(v[n]-1,0,n);
	else
		_r(0,0,n);
	for (i=0; i<v[n]; i++)
		_trim(s[i]);
	for (i=0; i<v[n]; i++)
		printf("%s\n",s[i]);
	return 0;
}
