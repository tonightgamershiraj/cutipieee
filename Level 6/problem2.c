#include <stdio.h>

int *getNum() {
    int num = 42;
    return &num;
}

int main() {
    int *ptr = getNum();
    printf("%d\n", *ptr);
    return 0;
}
