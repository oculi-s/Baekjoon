#include <stdio.h>
#include <string.h>

int i, n, s;
char a[101];

int num(int i){
	int n = 0;
	while(a[i] != ',' && a[i]){
		n += a[i] - '0';
		n *= 10;
		i++;
	}
	return n / 10;
}

int main(){
	a[0] = ',';
	scanf("%s", a + 1);
	for(i = 0; i < strlen(a); i++){
		if (a[i] == ','){
			s += num(i + 1);
		}
	}
	printf("%d", s);
	return 0;
}
