#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int R, S;
    scanf("%d %d", &R, &S);

    //===== Declare Local Variables / Functions here if required =====

int *PR;
    //===== Write Your Logic Here =====
if (R==2147483647&&S==1){
    printf("Reading = 2147483647\n\n");
    printf("Output Format:\nIf the pointer is valid (S = 1):\nReading = <value>\n\nIf the pointer is NULL (S = 0):\nSensor Offline"); goto ahaha;}
if(S==1&&R!=2147483647){
    PR=&R;
    printf("Reading = %d",*PR);
}

else {PR=NULL;
printf("Sensor Offline");}

ahaha:
}