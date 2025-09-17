#include <stdio.h>

int main() {
    int num = 5;
    const int *ptr = &num;
    *ptr = 10;
    return 0;
}
