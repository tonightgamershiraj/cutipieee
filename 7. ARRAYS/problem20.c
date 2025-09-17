#include <stdio.h>

struct Data {
    int arr[3];
};

int main() {
    struct Data d;
    d.arr = {1, 2, 3}; // Invalid assignment
    return 0;
}
