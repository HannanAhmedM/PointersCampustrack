#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    int *arr = NULL;

    /* Write your code here */
    /* malloc → validate → print → use → free → NULL → print */
    arr=(int*)malloc(sizeof(int));
    if (arr!=NULL) printf("Memory Allocated Successfully\n");
    free(arr);
    arr=NULL;
    if(arr==NULL) printf("Memory Freed Successfully\nPointer Reset to NULL");
    return 0;
}