#include<stdio.h>

int main(void) {

	int i, n, num;
	int min = 1000000, max = -1000000;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &num);
		if (num < min) {
			min = num;
		}
		if (num > max) {
			max = num;
		}
	}

	printf("%d %d", min, max);

	return 0;
}