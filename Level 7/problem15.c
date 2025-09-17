#include <stdio.h>

void func(int arr[]) {
    printf("%zu\n", sizeof(arr) / sizeof(int));
}

int main() {
    int myArr[5];
    func(myArr);
    return 0;
}
