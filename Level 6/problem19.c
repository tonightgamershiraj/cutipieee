#include <stdio.h>

int main() {
    int arr[3] = {1, 2, 3};
    printf("%zu\n", sizeof(arr) / sizeof(int));
    int *ptr = arr;
    printf("%zu\n", sizeof(ptr) / sizeof(int));
    return 0;
}
