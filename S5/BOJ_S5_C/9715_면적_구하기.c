#include <stdio.h>

char s[52][53];
int t, r, c, i, j, k, a[52][52], v;
int x[4] = {0,0,-1,1}, y[4] = {-1,1,0,0};

int main(){
	scanf("%d", &t);
	while(t--){
		v = 0;
		scanf("%d %d", &r, &c);
		for (i=1; i<=50; i++)
			for (j=1; j<=50; j++)
				a[i][j] = 0;
		for (i=1; i<=r; i++){
			scanf("%s", s[i]+1);
			for (j=1; j<=c; j++){
				a[i][j] = s[i][j]-'0';
				if (a[i][j])
					v += 2;
			}
		}
		for (i=1; i<=r; i++)
			for (j=1; j<=c; j++)
				for (k=0; k<4; k++)
					if (a[i+y[k]][j+x[k]] < a[i][j])
						v += a[i][j] - a[i+y[k]][j+x[k]];
		printf("%d\n", v);
	}
	return 0;
}
