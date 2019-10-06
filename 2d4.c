#include <stdio.h>

int main() {
    int n,m;
    printf("Enter no of rows&columns : ");
    scanf("%d %d",&n, &m);

    if(n != m) {
        printf("Symmetric matrix must be a square matrix!\n");
        return 0;
    }

    int arr[n][m];
    int i,j;
    for(i=0; i<n ;i++) {
        for(j=0; j<m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=0; i<n ;i++) {
        for(j=0; j<m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


    for(i=0; i<n ;i++) {
        for(j=0; j<m; j++) {
            if(arr[i][j] != arr[j][i]) {
                printf("This matrix is not a symmetric!");
                return 0;
            }
        }
    }
    printf("This matrix is symmetric");
}
