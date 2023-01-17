#include<stdio.h>

int main(void) {

	int a, b, C, i;

	scanf("%d", &C);

	for (i = 1; i <= C; i++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
	}

	return 0;
}