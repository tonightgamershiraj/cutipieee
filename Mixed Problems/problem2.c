#include <stdio.h>

int main() {
    int arr[3] = {1, 2, 3};
    int sum;
    for (int i = 0; i < 3; i++) {
        sum += arr[i];
    }
    printf("%d\n", sum);
    return 0;
}
