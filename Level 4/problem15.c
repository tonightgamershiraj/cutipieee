#include <stdio.h>

int main() {
    int i = 0;
    while (i < 5) {
        if (i % 2 == 0) continue;
        printf("%d\n", i);
        i++;
    }
    return 0;
}
