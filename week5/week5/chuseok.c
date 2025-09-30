#include <stdio.h>


void print_calendar(int);
int main(void) {


	//1. 조건문 2. 반복문

	


	int chuseok_mth = 10;
	int chuseok = 6;

	int this_mth = 9;
	int today = 30;




	if (this_mth == chuseok_mth){
		printf("Chuseok is coming\n");

	}
	else {

		printf("No Chuseok yet\n");
	}



/*
	for (int i = today; i < 31; i++) {

		printf("Today is %d월 %일", this_mth, today); 


	}
	*/
	print_calendar(this_mth);

	return 0;
}

void print_calendar(this_mth) {

	int short_mth = 2,
		mid_mth1 = 9,
		mid_mth2 = 4,
		mid_mth4 = 6,
		mid_mth = 11,
		days;

	switch (this_mth) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		days = 31; break;
	
	case 4:

	case 6:

	case 9 :

	case 11 : 
		days = 30; break;
	case 2:
		days = 28; break;

	default : 
		printf("That's not a month!");
		return; 
	}
		 
	printf("*** %d월 *** \n ",this_mth);
	int rows = days / 7;
	int cols = 7;

	for (int j = 1; j < rows; j++) {
		for (int i = 1; i < 7; i++) {
			printf("%d\t", j);

		}
		printf("\n");
	}

}