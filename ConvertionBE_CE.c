#include <stdio.h>

int main() {
    // Declaration of variables
    int CE, BE;

    // Input value of CE
    printf("Enter CE value: ");
    scanf_s("%d", &CE);

    // Convert CE to BE
    BE = CE + 543;

    // Print BE
    printf("BE value: %d\n", BE);

    return 0;
}
