#include <stdio.h>

int main() {
    int *ptr = (int *)0x12345678;
    *ptr = 10;
    return 0;
}
