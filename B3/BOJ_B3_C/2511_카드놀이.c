#include <stdio.h>

int i, a[11], b[11], c;
int main(){
	for (i = 1; i <= 10; i++){
		scanf("%d", a + i);
	}
	for (i = 1; i <= 10; i++){
		scanf("%d", b + i);
		a[0] += a[i] > b[i] ? 3 : a[i] == b[i];
		b[0] += b[i] > a[i] ? 3 : a[i] == b[i];
		if (a[i] != b[i]){
			c = (a[i] > b[i]) * 1 + (a[i] < b[i]) * 2;
		}
	}
	printf("%d %d\n%c", a[0], b[0], c ? (a[0] > b[0] ? 'A': a[0] < b[0] ? 'B' : 'A' + c - 1) : 'D');	
	return 0;
}
