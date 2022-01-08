#include <stdio.h>

int n, i, a, b[101], t, m, c;
int main(){
	scanf("%d\n%d", &n, &a);
	n--;
	for (i=0; i<n; i++)
		scanf("%d", &t), b[t]++, m = m>t?m:t;
	while(m >= a)
		for (i=m; i; i--)
			if (b[i]){
				c++, a++, b[i]--, b[i-1]++;
				m = b[i]?i:i-1;
				break;
			}
	printf("%d", c);
	return 0;
}
