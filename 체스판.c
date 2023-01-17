#include<stdio.h>

int main(void) {

	int king, queen, look, bishop, night, phon;
	int aking = 1;
	int aqueen = 1;
	int alook = 2;
	int abishop = 2;
	int anight = 2;
	int aphon = 8;
	scanf("%d %d %d %d %d %d", &king, &queen, &look, &bishop, &night, &phon);
	printf("%d %d %d %d %d %d", aking - king, aqueen - queen, alook - look, abishop - bishop, anight - night, aphon - phon);



	return 0;
}