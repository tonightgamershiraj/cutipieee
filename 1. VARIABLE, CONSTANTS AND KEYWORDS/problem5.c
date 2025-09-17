#include <stdio.h>

void func() {
    int count = 0;
    count++;
    printf("%d\n", count);
}

int main() {
    func();
    func();
    return 0;
}
