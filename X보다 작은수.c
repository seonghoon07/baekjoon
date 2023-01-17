#include<stdio.h>

int main(void) {

	int n, i, x, j, a[10000];

	scanf("%d %d", &n, &x);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (j = 0; j < n; j++) {
		if (a[j] < x) {
			printf("%d ", a[j]);
		}
	}

	return 0;
}