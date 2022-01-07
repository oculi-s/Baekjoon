#include <stdio.h>

int n, i, c;
char a[11], b[11];
int _c(int i, int j){
	if (!a[j])
		return 1;
	else if (b[i] == a[j])
		return _c((i+1)%10, j+1);
	else
		return 0;
}

int main(){
	scanf("%s\n%d", a, &n);
	while(n--){
		scanf("%s", b);
		for (i=0; b[i]; i++)
			if (_c(i, 0)){
				c++;
				break;
			}
	}
	printf("%d", c);
	return 0;
}
