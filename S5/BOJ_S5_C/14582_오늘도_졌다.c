#include <stdio.h>

int i, a[12], b[12];
int main(){
	for (i=2; i<=10; i++)
		scanf("%d", a+i);
	for (i=2; i<=10; i++)
		scanf("%d", b+i);
	for (i=1; i<=10; i++){
		a[i+1] += a[i], b[i] += b[i-1];
		if (a[i+1]>b[i])
			break;
	}
	printf("%s", i<=10?"Yes":"No");
	return 0;
}
