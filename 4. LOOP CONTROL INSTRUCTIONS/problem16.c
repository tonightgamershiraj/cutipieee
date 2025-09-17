#include <stdio.h>

int main() {
    goto inside;
    for (int i = 0; i < 5; i++) {
inside:
        printf("%d\n", i);
    }
    return 0;
}
