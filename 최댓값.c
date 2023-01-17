#include<stdio.h>

int main(void) {

	int n = 9, i, a[100],max = -1, index;

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		if (a[i] > max) {
			max = a[i];
			index = i;
		}
	}
	printf("%d %d", max, index + 1);

	return 0;
}