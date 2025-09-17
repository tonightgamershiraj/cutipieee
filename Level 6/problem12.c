#include <stdio.h>

int main() {
    int num = 5;
    int *const ptr = &num;
    int another = 10;
    ptr = &another;
    return 0;
}
