#include <stdio.h>

int main() {
    int rows;
    printf("Number of Rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = rows - i; j >= 1; j--) {
            printf(" ");
        }
        for (int k = i; k >= 1; k--) {
            printf("%d ", k);
        }
        printf("\n");
    }

    return 0;
}
