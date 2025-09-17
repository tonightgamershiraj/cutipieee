#include <stdio.h>

int main() {
    int num = 5;
    int *ptr = &num;
    int **pptr = &ptr;
    *pptr = 10;
    return 0;
}
