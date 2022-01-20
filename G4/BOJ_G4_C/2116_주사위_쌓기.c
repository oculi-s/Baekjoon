#include <stdio.h>

int n, a[10000][7], i, j, b[7] = {0,6,4,5,2,3,1}, m, v, t;
int s[7][4] = {{},{2,3,4,5},{1,3,5,6},{1,2,4,6},{1,3,5,6},{1,2,4,6},{2,3,4,5}};

int max4(int i, int s[4]){
	int a0 = a[i][s[0]];
	int a1 = a[i][s[1]];
	int a2 = a[i][s[2]];
	int a3 = a[i][s[3]];
	if (a0>a1&&a0>a2&&a0>a3)
		return a0;
	else if (a1>a2&&a1>a3)
		return a1;
	else if (a2>a3)
		return a2;
	else
		return a3;
}

int _index(int a[6], int v){
	int i;
	for (i=1; i<=6; i++)
		if (a[i] == v)
			return i;
}

int main(){
	scanf("%d", &n);
	for (i=0; i<n; i++)
		for (j=1; j<=6; j++)
			scanf("%d", &(a[i][j]));
	for (i=1; i<=6; i++){
		t = i, v = max4(0, s[t]);
		for (j=1; j<n; j++){
			t = _index(a[j], a[j-1][b[t]]);
			v += max4(j, s[t]);
		}
		if (v > m)
			m = v;
	}
	printf("%d", m);
	return 0;
}
