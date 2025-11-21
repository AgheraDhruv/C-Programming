#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *summary;
    int initial_size, new_size;

    printf("Enter initial size of the article summary: ");
    scanf("%d", &initial_size);
    getchar(); // to consume newline from buffer

    // Step 1: Allocate memory using calloc()
    summary = (char *)calloc(initial_size, sizeof(char));
    if (summary == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the initial article summary:\n");
    fgets(summary, initial_size, stdin);

    printf("\nInitial Summary:\n%s\n", summary);

    // Step 2: Ask user to reallocate for a larger summary
    printf("\nEnter new size for expanded summary: ");
    scanf("%d", &new_size);
    getchar();

    // Step 3: Reallocate memory using realloc()
    summary = (char *)realloc(summary, new_size * sizeof(char));
    if (summary == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    printf("Enter the updated (longer) article summary:\n");
    fgets(summary, new_size, stdin);

    // Step 4: Display updated summary
    printf("\nUpdated Summary:\n%s\n", summary);

    // Free allocated memory
    free(summary);
    printf("\nThe Program Is Devloped BY:DHRUV_25CE001");
    return 0;
}

