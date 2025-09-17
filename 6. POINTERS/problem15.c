#include <stdio.h>

int main() {
    int a = 1, b = 2;
    int *p1 = &a, *p2 = &b;
    if (p1 < p2) printf("p1 before p2\n");
    return 0;
}
