#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


void inspectMemory(int reading) {

    //===== Declare Local Variables / Functions here if required =====

int *readingp=&reading;
    //===== Write Your Logic Here =====
printf("Value = %d\n",reading);
printf("Address = %p",*readingp);

}

int main() {
    int reading;
    scanf("%d", &reading);

    //===== Declare Local Variables / Functions here if required =====


    //===== Write Your Logic Here =====
inspectMemory(reading);

}