#include <stdio.h>

int main() {
    int arr[3][3];
    int Tarr[3][3];
    int i,j;


    for(i=0; i<3 ;i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=0; i<3 ;i++) {
        for(j=0; j<3; j++) {
            Tarr[i][j] = arr[j][i];
        }
    }

    printf("Transposed Matrix : \n");
    for(i=0; i<3 ;i++) {
        for(j=0; j<3; j++) {
            printf("%d ", Tarr[i][j]);
        }
        printf("\n");
    }
}
