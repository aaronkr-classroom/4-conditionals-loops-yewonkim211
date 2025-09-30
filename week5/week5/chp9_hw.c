#include <stdio.h>
//슬라이더 89

int main(void) {

    int m, n;
    for (m = 5; m < 7; m++) {

        for (n = 0; n < 3; n++) {

            if (m == 5 && n == 1) break; 
            if (n == 2) continue; 
            printf("m(%d)-n(%d) \n", m, n); 

        }

    }

    int step = 2, i;
    while (step > 0) {
        i = 0;
        while (i <= 9) {
            printf(" %d * %d = %d \n", step, i, step * i); 
            i++; 
        }
        step--; 
    }

    return 0;
}
