#include <stdio.h>

int add(int a, int b) { return a + b; }

int main() {
    int (*funcPtr)() = add;
    printf("%d\n", funcPtr(2, 3));
    return 0;
}
