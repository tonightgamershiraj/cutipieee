#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(5);
    for (int i = 0; i < 5; i++) ptr[i] = i;
    free(ptr);
    return 0;
}
