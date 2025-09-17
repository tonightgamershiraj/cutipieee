#include <stdio.h>

void print(int n) {
    if (n > 0) {
        printf("%d\n", n);
        print(n--);
    }
}

int main() {
    print(3);
    return 0;
}
