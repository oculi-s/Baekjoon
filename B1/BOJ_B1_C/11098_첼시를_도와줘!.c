#include <stdio.h>

typedef struct {
	int p;
	char n[21];
} node;

node s[100];
int n, p, m, i;
int main(){
	scanf("%d", &n);
	while(n--){
		scanf("%d", &p);
		m = 0;
		for (i=0; i<p; i++){
			scanf("%d %s", &(s[i].p), &(s[i].n));
			m = s[i].p > m ? s[i].p:m;
		}
		for (i=0; i<p; i++)
			if (s[i].p == m){
				printf("%s\n", s[i].n);
				break;
			}
	}
	return 0;
}
