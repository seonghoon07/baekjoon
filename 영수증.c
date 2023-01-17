#include<stdio.h>

int main(void) {
	
	int x, n, a, b, sum, i;
	scanf("%d %d", &x, &n);
	sum = 0;


	for (i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		sum += (a * b);
	}

	if (sum == x) {
		printf("Yes");
	}
	else {
		printf("No");
	}



	return 0;
}