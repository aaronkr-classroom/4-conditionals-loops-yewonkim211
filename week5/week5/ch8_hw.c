#include <stdio.h>


void q1(int result);
void q2(int result);
void q3(int result);


int main(void) {


	q1(-5);
	q2(-5);
	q3(5);

	return 0; 
}


void q1(int result) {
	if (result < 0) {
		result = result * (-1);
	}
	printf(" result = %d", result);
}


void q2(int result) {
	result = (result < 0) ? -result : result;
	printf(" result = %d", result);
}


void q3(int result) {
	
	
	switch (result) {
	case 6:
		result = 0;
		break;
	case 5:
		result = 1;
	
	case 4:
		result = result + 10;
		break;
	}
	printf(" result = %d", result);
}