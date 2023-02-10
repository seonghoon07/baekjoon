#include <stdio.h> 


int mine(int n)
{
	int temp = n;
	while (n > 0) {
		temp += n % 10;
		n /= 10;
	}
	return temp;
}

int main(void) {
	int arr[10001], i, check; // 변수 선언
	for (i = 1; i < 10001; i++) // 10001번 반복 돌림
	{
		check = mine(i); // mine 함수 호출
		if (check < 10001) // 만약 함수 리턴값이 10001보다 작을때
			arr[check] = 1; // 배열에 하나씩 추가
	}
	for (i = 1; i < 10001; i++)
	{
		if (arr[i] != 1)
			printf("%d\n", i);
	}
	return 0;
}