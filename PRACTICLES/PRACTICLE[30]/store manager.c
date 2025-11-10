#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    double *prices, temp;

    printf("Enter number of items: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Error: Invalid number of items.\n");
        return 1;
    }

    if (n == 0) {
        printf("Error: No items to sort.\n");
        return 0;
    }

    prices = (double *)malloc(n * sizeof(double));
    if (prices == NULL) {
        printf("Error: Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d prices separated by spaces:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%lf", prices + i) != 1) {
            printf("Error: Invalid input for price. Please enter numeric values only.\n");
            free(prices);
            return 1;
        }
    }

    // Sorting using pointer arithmetic (Bubble sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(prices + i) > *(prices + j)) {
                temp = *(prices + i);
                *(prices + i) = *(prices + j);
                *(prices + j) = temp;
            }
        }
    }

    printf("Sorted Prices: ");
    for (int i = 0; i < n; i++) {
        printf("%.2lf", *(prices + i));
        if (i < n - 1)
            printf(", ");
    }
    printf("\n");

    free(prices);
     printf("\nThe Program Is Devloped BY:DHRUV_25CE001");
    return 0;

}
