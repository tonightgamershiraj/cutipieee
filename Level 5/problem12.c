#include <stdio.h>

int sum(int n) {
    if (n == 0) return 0;
    return n + sum(n);
}

int main() {
    printf("%d\n", sum(5));
    return 0;
}
