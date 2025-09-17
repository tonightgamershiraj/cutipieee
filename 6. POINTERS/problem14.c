#include <stdio.h>
#include <stdlib.h>

int main() {
    void *ptr = malloc(10 * sizeof(int));
    ptr += sizeof(int);
    *((int *)ptr) = 5;
    free(ptr);
    return 0;
}
