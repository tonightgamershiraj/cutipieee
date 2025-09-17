#include <stdio.h>

int main() {
    float i = 0.0;
    while (i != 1.0) {
        printf("%.1f\n", i);
        i += 0.1;
    }
    return 0;
}
