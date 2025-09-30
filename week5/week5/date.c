#include <stdio.h>

int main(void) {

	//2025.12.31
	//3개의 정수를 변수에 나누어서 대입함
	int year = 2025,
		mth = 9,
		day = 30;

	day++;

	if (day >= 30) {

		mth++;
		day = 1;

		if (mth >= 12) {
			year++;
			mth = 1;
		}
	}

	printf("Date : %d년 %d월 %d일", year, mth, day);

	return 0;
}