#include <stdio.h>

int main() {
    int arr[3] = {3, 1, 2};
    for (int i = 0; i <= 3; i++) {
        for (int j = i + 1; j <= 3; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return 0;
}
