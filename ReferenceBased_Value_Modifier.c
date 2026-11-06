#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


void modifyValue(int* ptr, int offset) {

    //===== Declare Local Variables / Functions here if required =====
int a=*ptr;
*ptr+=offset;
    //===== Write Your Logic Here =====
return a,*ptr;

}

int main() {
    int N, X;
    scanf("%d %d", &N, &X);

    //===== Declare Local Variables / Functions here if required =====


    int original = N;

    modifyValue(&N, X);

    printf("Original Value = %d\n", original);
    printf("Modified Value = %d\n", N);
    return 0;
}