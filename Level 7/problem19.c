#include <stdio.h>

int main() {
    int arr[4] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++) {
        int temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }
    return 0;
}
