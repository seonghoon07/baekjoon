#include<stdio.h>

int main(void) {

	int v,n,i,count = 0,a[100];

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &v);

	for (int j = 0; j < n; j++) {
		if (a[j] == v) {
			count++;
		}
	}
	printf("%d", count);

	return 0;
}