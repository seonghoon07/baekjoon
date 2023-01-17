#include<stdio.h>

int main(void) {

	int h, m, l;
	scanf("%d %d", &h, &m);
	scanf("%d", &l);
	
	h += l / 60;
	m += l % 60;
	if (m >= 60) {
		h += 1;
		m -= 60;
	}
	if (h >= 24) {
		h -= 24;
	}

	printf("%d %d", h, m);

	return 0;
}