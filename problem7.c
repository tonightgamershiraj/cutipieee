#include <stdio.h>

int main() {
    char src[] = "Test";
    char dest[5];
    for (int i = 0; i < 4; i++) {
        dest[i] = src[i];
    }
    printf("%s\n", dest);
    return 0;
}
