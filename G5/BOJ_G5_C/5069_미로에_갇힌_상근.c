#include <stdio.h>

int t, n, i, j, a[9][49], b[9][49], c, v, k;
int main(){
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		for (i=0; i<8; i++)
			for (j=0; j<49; j++)
				a[i][j] = 0, b[i][j] = 0;
		a[0][0] = 1;
		while(n--){
			for (i=0; i<6; i++)
				b[1][i] += a[0][0], b[0][0] += a[1][i];
			for (i=1; i<=7; i++){
				c = 6*i;
				for (j=0; j<c; j++){
					v = a[i][j], k = j/i;
					b[i][(j+1)%c] += v;
					b[i][(j-1+c)%c] += v;
					if (j % i){
						b[i-1][(k*(i-1)+j-(k*i))%(c-6)] += v;
						b[i-1][(k*(i-1)+j-(k*i)-1)%(c-6)] += v;
						b[i+1][(k*(i+1)+j-(k*i))%(c+6)] += v;
						b[i+1][(k*(i+1)+j-(k*i)+1)%(c+6)] += v;
					}
					else {
						if (c>6)
							b[i-1][(k*(i-1))%(c-6)] += v;
						b[i+1][(k*(i+1))%(c+6)] += v;
						b[i+1][(k*(i+1)+1)%(c+6)] += v;
						b[i+1][(k*(i+1)+(c+5))%(c+6)] += v;
					}
				}
			}
			for (i=0; i<8; i++)
				for (j=0; j<49; j++)
					a[i][j] = b[i][j], b[i][j] = 0;
		}
		printf("%d\n", a[0][0]);
	}
	return 0;
}
