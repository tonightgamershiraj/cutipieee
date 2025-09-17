#include <stdio.h>

int main() {
    const int arr[2] = {1, 2};
    arr[0] = 3;
    printf("%d\n", arr[0]);
    return 0;
}
