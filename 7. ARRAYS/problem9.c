#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = malloc(3 * sizeof(int));
    arr[3] = 4;
    free(arr);
    return 0;
}
