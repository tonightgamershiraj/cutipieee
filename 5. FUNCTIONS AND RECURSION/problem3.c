#include <stdio.h>

int infinite(int n) {
    return infinite(n - 1);
}

int main() {
    printf("%d\n", infinite(5));
    return 0;
}
