#include <stdio.h>

int main() {
    int n;
    printf("Please input n : ");
    scanf("%d", &n);

    int arr[n][n];
    int i,j;
    for(i=0; i<n ;i++) {
        for(j=0; j<n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=0; i<n ;i++) {
        for(j=0; j<n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int sum1 = 0, sum2 = 0;

    for(i=0; i<n; i++) {
        sum1 = 0;
        sum2 = 0;
        for(j=0; j<n; j++) {
            sum1 += arr[i][j];
            sum2 += arr[j][i];
        }
        if(sum1 != sum2) {
            printf("This is not a Magic Square!");
            return 0;
        }
    }
    //printf("%d %d\n",sum1, sum2);

    sum1 = 0;
    sum2 = 0;
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            if(i==j) {
                sum1 += arr[i][j];
            }
            if(i==n-j-1) {
                sum2 += arr[i][j];
            }
        }
    }
    //printf("%d %d\n",sum1, sum2);
    if(sum1 != sum2) {
        printf("This is not a Magic Square!");
        return 0;
    } else {
        printf("This is a Magic Square!");
    }
}
