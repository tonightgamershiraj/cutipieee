#include <stdio.h>

int max(int a, int b, int c) {
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

int main() {
    printf("%d\n", max(1, 2));
    return 0;
}
