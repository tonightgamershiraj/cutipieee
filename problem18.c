#include <stdio.h>
#define SQUARE(x) x * x

int main() {
    int result = SQUARE(2 + 3);
    printf("%d\n", result); 
    return 0;
}
