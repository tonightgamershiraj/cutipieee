#include <stdio.h>

int main() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 1) break;
            printf("%d %d\n", i, j);
        }
    }
    return 0;
}
