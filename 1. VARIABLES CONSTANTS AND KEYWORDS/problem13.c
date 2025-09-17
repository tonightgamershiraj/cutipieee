#include <stdio.h>

int main() {
    register int x = 5;
    int *ptr = &x;
    printf("%d\n", *ptr);
    return 0;
}
