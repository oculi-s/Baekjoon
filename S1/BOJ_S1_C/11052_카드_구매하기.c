#include <stdio.h>

int n, p[1001], i, m[1001];

void _bfs(int v, int s, int e) {
	int i;
	if (s <= n && m[s] <= v) {
		m[s] = v;
		for (i = e; i <= n; i++)
			_bfs(v + p[i], s + i, i);
	}
}

int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		scanf("%d", p + i);
	_bfs(0, 0, 1);
	printf("%d", m[n]);
	return 0;
}