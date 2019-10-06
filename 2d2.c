#include <stdio.h>

int main() {
    printf("Enter no. and char : ");
    int no;
    char c;
    scanf("%d %c", &no, &c);

    int i,j;
    char array[no][no];

    for(i=0; i<no; i++) {
        for(j=0; j<no; j++) {
            if(i==0 || i==no-1) {
                array[i][j] = c;
            } else if(j==no-i-1) {
                array[i][j] = c;
            } else {
                array[i][j] = ' ';
            }
        }
    }

    for(i=0; i<no; i++) {
        for(j=0; j<no; j++) {
            printf("%c", array[i][j]);
        }
        printf("\n");
    }
}
