#include <stdio.h>

int main() {
    extern int x;
    x = 5;
    printf("%d\n", x);
    return 0;
}
