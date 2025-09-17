#include <stdio.h>

int main() {
    char str1[] = "hello";
    char str2[] = "hello";
    if (str1 == str2) {
        printf("Equal\n");
    } else {
        printf("Not equal\n");
    }
    return 0;
}
