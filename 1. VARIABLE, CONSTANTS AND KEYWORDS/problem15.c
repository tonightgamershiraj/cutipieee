#include <stdio.h>

static int x = 5;

void func() {
    x = 10;
}

int main() {
    func();
    printf("%d\n", x);
    return 0;
}
