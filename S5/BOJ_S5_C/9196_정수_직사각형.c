#include <stdio.h>

int h, w, i, j, x, y;
int main(){
	scanf("%d %d", &h, &w);
	while (h+w){
		x = 100, y = 100;
		for (i=1; i*i<=20000; i++)
			for (j=i+1; j*j<=20000; j++)
				if (i!=h || j!=w) {
					if (i*i+j*j > h*h+w*w || (i*i+j*j == h*h+w*w && h<i))
						if (i*i+j*j < x*x+y*y)
							y = i, x = j;
				}
		printf("%d %d\n", y, x);
		scanf("%d %d", &h, &w);
	}
	return 0;
}
