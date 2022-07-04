#include <stdio.h>

int n, m, a[100000], b, i;

int _c(int *a, int *b){
  if (*a > *b)
    return 1;
  else if (*a < *b)
    return -1;
  else
    return 0;
}

int find(int v){
  int l = 0, r = n-1, m;
  while(l < r){
    m = (l + r)/2;
    if (a[m] > v)
      r = m;
    else if (a[m] < v)
      l = m + 1;
    else
      break;
  }
  printf("%d\n", a[r] == v || a[m] == v || a[l] == v);
}

int main(){
  scanf("%d", &n);
  for (i=0; i<n; i++)
    scanf("%d", a+i);
  qsort(a, n, sizeof(int), _c);
  scanf("%d", &m);
  for (i=0; i<m; i++){
    scanf("%d", &b);
    find(b);
  }
  return 0;
}