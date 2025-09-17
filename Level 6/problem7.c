#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(sizeof(int));
    *(ptr + 1) = 10;
    printf("%d\n", *(ptr + 1));
    free(ptr);
    return 0;
}
