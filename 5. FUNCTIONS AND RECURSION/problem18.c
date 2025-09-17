#include <stdio.h>

int sum(int count, ...) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += /* missing va_arg */;
    }
    return total;
}

int main() {
    printf("%d\n", sum(2, 3, 4));
    return 0;
}
