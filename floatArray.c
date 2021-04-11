#include <stdio.h> 
#include <stdlib.h>

int main(void) {

    float *currentIteration = (float*)malloc(4 * sizeof(float));
    for (int a = 0; a < 4; a++) {
        *(currentIteration + a) = 1.0/(a+1);
    }
    for (int i = 0; i < 4; i++) {
        printf("%lf \n", *(currentIteration+i));
    }
    
    
    return 0;
}