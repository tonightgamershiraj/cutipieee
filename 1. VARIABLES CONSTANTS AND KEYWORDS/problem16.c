#include <stdio.h>
#define MAX 10 + 5

int main() {
    int result = MAX * 2;
    printf("%d\n", result); // Expected 30, gets 20
    return 0;
}
