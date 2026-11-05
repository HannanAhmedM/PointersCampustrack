#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


void exchangeValues(int* ptrA, int* ptrB) {

    //===== Declare Local Variables / Functions here if required =====

int A=*ptrA,B=*ptrB;
*ptrA=B; *ptrB=A;
    //===== Write Your Logic Here =====
return *ptrA,*ptrB;

}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    //===== Declare Local Variables / Functions here if required =====

    exchangeValues(&A, &B);

    printf("After Swapping:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    return 0;
}