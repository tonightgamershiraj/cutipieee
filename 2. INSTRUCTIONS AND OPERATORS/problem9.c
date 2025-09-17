#include <stdio.h>

int main() {
    int x = 5;
    int y = x > 0 ? 1 : 0;
    y ? printf("Positive\n") printf("Non-positive\n");
    return 0;
}
