#include <stdio.h>

int main() {
    char str[] = "ABCD";
    int *ptr = (int *)str;
    printf("%d\n", *ptr);
    return 0;
}
