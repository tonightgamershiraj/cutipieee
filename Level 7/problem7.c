#include <stdio.h>

void printArray(int arr[]) {
    for (int i = 0; i < 5; i++) printf("%d\n", arr[i]);
}

int main() {
    int myArr[3] = {1, 2, 3};
    printArray(myArr);
    return 0;
}
