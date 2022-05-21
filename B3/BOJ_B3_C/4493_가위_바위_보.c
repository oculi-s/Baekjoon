#include <stdio.h>

int n, k, c[2];
char a, b;

int main(){
	scanf("%d", &n);
	while(n--){
		scanf("%d", &k);
		c[0] = 0, c[1] = 0;
		while(k--){
			scanf(" %c %c", &a, &b);
			if (a != b){
				if (a == 'R'){
					c[b == 'P']++;
				}else if (a == 'P'){
					c[b == 'S']++;
				}else{
					c[b == 'R']++;
				}
			}
		}
		if (c[0] == c[1]){
			printf("TIE\n");
		}else{
			printf("Player %d\n", c[0]>c[1]?1:2);
		}
	}
	return 0;
}
