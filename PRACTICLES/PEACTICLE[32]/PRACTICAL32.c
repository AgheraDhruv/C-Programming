#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Prototype: Must match the definition at the bottom exactly */
void reverse(char *data, long size);

int main(void) {
    FILE *fp;

    /* Try local demo file inside PRACTICAL32 directory */
    fp = fopen("demo", "r");

    /* If not found, try current directory */
    if (fp == NULL) {
        fp = fopen("demo.txt", "r");
    }

    /* FIX 1: Handle the error if file is still NULL */
    if (fp == NULL) {
        perror("Error Reading File");
        return 1; /* Stop the program here to prevent crashing */
    }

    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    fseek(fp, 0, SEEK_SET);

    /* Allocate memory */
    char *data = malloc((size_t)size + 1);
    if (!data) {
        perror("malloc");
        fclose(fp);
        return 1;
    }

    size_t nread = fread(data, 1, (size_t)size, fp);
    data[nread] = '\0';

    /* Call the function */
    reverse(data, size);

    free(data);
    fclose(fp);
    return 0;
}

/* Updated Function Definition to use 'long size' to match main */
void reverse(char *data, long size) {
    int start = 0;
    /* Changed 'int l' to 'long l' to match size type */
    for (long l = 0; l <= size; ++l) {
        char c = data[l];

        if (c == ' ' || c == '\0' || c == '\n') {
            /* Print word in reverse */
            for (long m = l - 1; m >= start; --m) {
                putchar(data[m]);
            }

            /* FIX 2: Handle formatting correctly */
            if (c == ' ') putchar(' ');
            else if (c == '\n') putchar('\n');

            start = l + 1;
        }
    }
    putchar('\n');
    printf("this program is developed by dhruv_25cCE001\n");
}
