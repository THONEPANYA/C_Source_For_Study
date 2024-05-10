#include <stdio.h>

int main() {
    int count = 0;
    int sum = 0;

    while (count <= 100) {
        sum += count;
        count += 2;
    }

    printf("Sum of even numbers up to 100: %d\n", sum);

    return 0;
}
