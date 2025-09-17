#include <stdio.h>

int main() {
    int num = 5;
    int *ptr = &num;
    printf("%d\n", *(ptr + 1));
    return 0;
}
