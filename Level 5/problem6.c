#include <stdio.h>

int factorial(int n) {
    if (n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    printf("%d\n", factorial(0));
    return 0;
}
