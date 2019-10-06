#include <stdio.h>

int main() {
    int a[3][3];
    int b[3][3];
    int result[3][3];

    int i,j,k;

    printf("Input first matrix : \n");

    for(i=0; i<3 ;i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Input second matrix : \n");

    for(i=0; i<3 ;i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    //calculating part
    int sum;
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            sum = 0;
            for(k=0; k<3; k++) {
                sum = sum + (a[i][k]*b[k][j]);
            }
            result[i][j] = sum;
        }

    }

    printf("Result is : \n");

    for(i=0; i<3 ;i++) {
        for(j=0; j<3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}
