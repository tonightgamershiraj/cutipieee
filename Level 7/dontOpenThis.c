// Snippet 1
// This code accesses an array out of bounds.
// The bug is accessing arr, which is beyond the array's size (0-2), causing undefined behavior.
#include <stdio.h>

int main() {
    int arr[3] = {1, 2, 3};
    printf("%d\n", arr[2]);
    return 0;
}

// Snippet 2
// This code uses an uninitialized array.
// The bug is the array elements are uninitialized, containing garbage values, leading to incorrect output.
#include <stdio.h>

int main() {
    int arr[3] = {0};
    printf("%d\n", arr[0] + arr[1] + arr[2]);
    return 0;
}

// Snippet 3
// This code declares an array with insufficient size for a string.
// The bug is the array size 5 doesn't account for the null terminator, causing buffer overflow or undefined behavior.
#include <stdio.h>

int main() {
    char str[6] = "Hello";
    printf("%s\n", str);
    return 0;
}

// Snippet 4
// This code copies an array incorrectly using assignment.
// The bug is arrays can't be assigned directly; this causes a compilation error.
#include <stdio.h>
#include <string.h>

int main() {
    int src[3] = {1, 2, 3};
    int dest[3];
    memcpy(dest, src, sizeof(src));
    return 0;
}

// Snippet 5
// This code traverses an array with an off-by-one loop.
// The bug is the loop condition i <= 5 accesses arr, which is out of bounds.
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}

// Snippet 6
// This code modifies a const array.
// The bug is attempting to modify a const array, causing a compilation error.
#include <stdio.h>

int main() {
    int arr[3] = {1, 2, 3};
    arr[0] = 4;
    return 0;
}

// Snippet 7
// This code passes an array to a function without size, risking overflow.
// The bug is hardcoding size 5 in the function, but array is size 3, causing out-of-bounds access.
#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) printf("%d\n", arr[i]);
}

int main() {
    int myArr[3] = {1, 2, 3};
    printArray(myArr, 3);
    return 0;
}

// Snippet 8
// This code initializes an array with too many values.
// The bug is providing 4 initializers for a size-3 array, causing a compilation error.
#include <stdio.h>

int main() {
    int arr[4] = {1, 2, 3, 4};
    return 0;
}

// Snippet 9
// This code uses array indexing on a pointer incorrectly.
// The bug is accessing arr, which is out of bounds for allocated size (0-2).
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = malloc(4 * sizeof(int));
    arr[3] = 4;
    free(arr);
    return 0;
}

// Snippet 10
// This code lacks null terminator in a string array.
// The bug is no '\0' terminator, so printf reads beyond the array until finding one by chance.
#include <stdio.h>

int main() {
    char str[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("%s\n", str);
    return 0;
}

// Snippet 11
// This code has a multidimensional array access error.
// The bug is accessing row 2, but array has only rows 0-1, causing out-of-bounds.
#include <stdio.h>

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printf("%d\n", matrix[1][0]);
    return 0;
}

// Snippet 12
// This code uses variable length array with invalid size.
// The bug is negative size for VLA, which is invalid and causes runtime error or undefined behavior.
#include <stdio.h>

int main() {
    int size = 5;
    int arr[size];
    return 0;
}

// Snippet 13
// This code sorts an array but overflows in swap.
// The bug is loop to i <= 3, accessing arr out of bounds during sorting.
#include <stdio.h>

int main() {
    int arr[3] = {3, 1, 2};
    for (int i = 0; i < 3; i++) {
        // Sorting logic
    }
    return 0;
}

// Snippet 14
// This code reads input into an array without bounds checking.
// The bug is gets doesn't limit input, risking buffer overflow if input >9 chars.
#include <stdio.h>

int main() {
    char buf[10];
    fgets(buf, sizeof(buf), stdin);
    printf("%s", buf);
    return 0;
}

// Snippet 15
// This code decays array to pointer but misuses sizeof.
// The bug is sizeof(arr) in func gives pointer size, not array length.
#include <stdio.h>

void func(int arr[], size_t size) {
    printf("%zu\n", size);
}

int main() {
    int myArr[5];
    func(myArr, sizeof(myArr) / sizeof(myArr[0]));
    return 0;
}

// Snippet 16
// This code initializes array partially but accesses uninitialized elements.
// The bug is arr[2-4] are zero-initialized, but if intent is explicit, it's fine; assume bug if expecting garbage.
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 0, 0, 0};
    printf("%d\n", arr[4]);
    return 0;
}

// Snippet 17
// This code uses array of pointers without initialization.
// The bug is arr is uninitialized pointer, dereferencing causes undefined behavior.
#include <stdio.h>

int main() {
    int nums[3] = {1, 2, 3};
    int *arr[3] = {&nums[0], &nums[1], &nums[2]};
    *arr[0] = 5;
    return 0;
}

// Snippet 18
// This code declares a large static array causing stack overflow.
// The bug is excessive stack allocation, potentially causing stack overflow on limited systems.
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *buf = malloc(10000000);
    // Use buf
    free(buf);
    return 0;
}

// Snippet 19
// This code reverses an array but swaps with wrong indices.
// The bug is loop to i < 4 swaps twice (full loop), messing up the reverse.
#include <stdio.h>

int main() {
    int arr[4] = {1, 2, 3, 4};
    for (int i = 0; i < 2; i++) {
        int temp = arr[i];
        arr[i] = arr[3 - i];
        arr[3 - i] = temp;
    }
    return 0;
}

// Snippet 20
// This code uses array in a struct without proper access.
// The bug is can't assign to array in struct after declaration; must initialize or use loop/memcpy.
#include <stdio.h>

struct Data {
    int arr[3];
};

int main() {
    struct Data d = {{1, 2, 3}};
    return 0;
}
