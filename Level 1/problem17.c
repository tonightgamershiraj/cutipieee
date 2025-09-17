#include <stdio.h>

int main() {
    int num = 10;
    const int *ptr = &num;
    *ptr = 20;
    return 0;
}
