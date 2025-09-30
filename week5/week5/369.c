#include <stdio.h>


//조건문, 반복문, 3, 6, 9 일 시 "짝 출력
void check369(int num);
int main(void) {

	int num = 0;
	printf("welcom 369game \n");
	printf("언제까지 원해? >>> ");
	scanf_s("%d", &num);


	check369(num);


	return 0;
}

void check369(int num) {


	for (int i = 1; i <= num; i++) {

		if ((i % 10) == 3 || (i  % 10) == 6 || (i  % 10 )== 9)
			printf("clap \t");
		else
			printf("%d \t", i);

	}



}