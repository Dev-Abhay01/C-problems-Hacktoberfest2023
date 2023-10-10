#include <stdio.h>

int main() {
    // Example using a while loop
    printf("Example using while loop:\n");
    int i = 1;
    while (i <= 10) {
        if (i == 5) {
            printf("Breaking the loop at i = 5\n");
            break;
        }
        printf("%d ", i);
        i++;
    }

    // Example using a do-while loop
    printf("\n\nExample using do-while loop:\n");
    i = 1;
    do {
        if (i == 5) {
            printf("Breaking the loop at i = 5\n");
            break;
        }
        printf("%d ", i);
        i++;
    } while (i <= 10);

    // Example using a for loop
    printf("\n\nExample using for loop:\n");
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("Breaking the loop at i = 5\n");
            break;
        }
        printf("%d ", i);
    }

    return 0;
}
