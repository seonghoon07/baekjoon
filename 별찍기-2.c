#include<stdio.h>

int main(void) {

	int j, i, n, k;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		for (j = 1; j < n - i; j++) {
			printf(" ");
		}
		for (k = 0; k < i + 1; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}