#include <stdio.h>

int main() {
    goto label;
    int x = 5;
label:
    printf("%d\n", x);
    return 0;
}
