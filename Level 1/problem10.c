#include <stdio.h>

int main() {
    int flag = 0;
    // Assume flag is set by hardware/interrupt
    while (!flag) {}
    printf("Flag set\n");
    return 0;
}
