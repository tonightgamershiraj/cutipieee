#include <stdio.h>

int main() {
    int x = 5;
    int result = x > 0 ? x > 10 ? 2 : 1 : 0;
    printf("%d\n", result);
    return 0;
}
