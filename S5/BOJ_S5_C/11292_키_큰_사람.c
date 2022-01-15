#include <stdio.h>

typedef struct{
	char n[11];
	float v;
}node;

node a[50];
int n, i;
float m;
int main(){
	scanf("%d", &n);
	while(n){
		m = 0;
		for (i=0; i<n; i++){
			scanf("%s %f", a[i].n, &(a[i].v));
			if (a[i].v > m)
				m = a[i].v;
		}
		for (i=0; i<n; i++)
			if (a[i].v == m)
				printf("%s ", a[i].n);
		printf("\n");
		scanf("%d", &n);
	}
	return 0;
}
