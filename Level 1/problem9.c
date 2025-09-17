#include <stdio.h>

int main() {
    int num = 10;
    int *const ptr = &num;
    int another = 20;
    ptr = &another;
    return 0;
}
