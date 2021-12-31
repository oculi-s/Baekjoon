#include <stdio.h>

int n, m, M, t, r, h, p;
int main(){
	scanf("%d %d %d %d %d", &n, &m, &M, &t, &r);
	p = m;
	if (m + t > M){
		printf("-1");
		return 0;
	}
	while(n){
		if (p + t <= M){
			p += t; n--;
		} else {
			p -= r;
			if (p < m)
				p = m;
		}
		h++;
	}
	printf("%d", h);
	return 0;
}