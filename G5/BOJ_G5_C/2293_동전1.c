#include <stdio.h>

int n, m, a[100], i, j, b[10001], c[10001];

int main(){
  scanf("%d %d", &n, &m);
  for (i=0; i<n; i++)
    scanf("%d", a+i);
  b[0] = 1;
  for (i=0; i<n; i++){
    for (j=a[i]; j<=m; j++)
      b[j] = c[j] + b[j-a[i]];
    for (j=1; j<=m; j++)
      c[j] = b[j];
  }
  printf("%d", c[m]);
  return 0;
}