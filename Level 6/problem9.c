#include <stdio.h>
#include <stdlib.h>

void allocate() {
    int *ptr = malloc(sizeof(int) * 10);
    // Use ptr
}

int main() {
    allocate();
    return 0;
}
