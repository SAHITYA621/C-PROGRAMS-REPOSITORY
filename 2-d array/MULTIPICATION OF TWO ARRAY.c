#include<stdio.h>
int main() {
    int i, j, k, size, arr[100][100], b[100][100], c[100][100], sum;

    printf("ENTER SIZE OF ARRAY:");
    scanf("%d", &size);

    printf("ENTER ARRAY ELEMENTS:");

    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("FIRST ARRAY:\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("ENTER THE VALUE OF SECOND ARRAY:\n");

    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("SECOND ARRAY:\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            sum = 0;
            for(k = 0; k < size; k++) {
                sum = arr[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }

    printf("PRODUCT OF TWO ARRAY:\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

