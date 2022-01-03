#include <stdio.h>

int a, b, c[100], d, i, j, t, s[2];
int o[11] = {10, 8, 5, 4, 9, 1, 7, 6, 3, 2, 0};

int main(){
	scanf("%d %d", &a, &b);
	for (i=0; i<11; i++)
		for (j=0; j<11; j++)
			for (t=a; t<=b; t++){
				if (t > 9){
					s[0] = t/10;
					s[1] = t%10;
				}else{
					s[0] = t;
					s[1] = 10;
				}
				if (o[i] == s[0] && o[j] == s[1] && !c[t]){
					if (d && !(d%10))
						printf("\n");
					printf("%d ", t), d++, c[t] = 1;
					break;
				}				
			}
	return 0;
}
