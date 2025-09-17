// Snippet 1
// This code dereferences a null pointer.
// The bug is dereferencing NULL, which causes a segmentation fault.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(sizeof(int));
    if (ptr != NULL) {
        *ptr = 10;
        printf("%d\n", *ptr);
        free(ptr);
    }
    return 0;
}

// Snippet 2
// This code returns the address of a local variable.
// The bug is returning a pointer to a local variable, which becomes invalid after the function returns, leading to undefined behavior.
#include <stdio.h>
#include <stdlib.h>

int *getNum() {
    int *num = malloc(sizeof(int));
    *num = 42;
    return num;
}

int main() {
    int *ptr = getNum();
    printf("%d\n", *ptr);
    free(ptr);
    return 0;
}

// Snippet 3
// This code uses an uninitialized pointer.
// The bug is dereferencing an uninitialized pointer, which points to garbage and causes undefined behavior.
#include <stdio.h>

int main() {
    int num = 5;
    int *ptr = &num;
    printf("%d\n", *ptr);
    return 0;
}

// Snippet 4
// This code has a dangling pointer after free.
// The bug is accessing memory after free, resulting in a dangling pointer and undefined behavior.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(sizeof(int));
    *ptr = 10;
    printf("%d\n", *ptr);
    free(ptr);
    return 0;
}

// Snippet 5
// This code performs invalid pointer arithmetic on a non-array pointer.
// The bug is pointer arithmetic accessing beyond the single integer, causing undefined behavior.
#include <stdio.h>

int main() {
    int arr[2] = {5, 10};
    int *ptr = arr;
    printf("%d\n", *(ptr + 1));
    return 0;
}

// Snippet 6
// This code misses the address-of operator when assigning to a pointer.
// The bug is assigning an int to a pointer without &, causing type mismatch and compilation error.
#include <stdio.h>

int main() {
    int num = 5;
    int *ptr = &num;
    printf("%d\n", *ptr);
    return 0;
}

// Snippet 7
// This code dereferences a pointer without allocating space.
// The bug is accessing ptr + 1, which is outside the allocated memory, causing undefined behavior.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(2 * sizeof(int));
    ptr[1] = 10;
    printf("%d\n", ptr[1]);
    free(ptr);
    return 0;
}

// Snippet 8
// This code casts a pointer incorrectly, leading to misalignment.
// The bug is casting char* to int*, which may cause alignment issues or undefined behavior on some architectures.
#include <stdio.h>

int main() {
    int num = 0x41424344; // 'ABCD' in hex
    int *ptr = &num;
    printf("%d\n", *ptr);
    return 0;
}

// Snippet 9
// This code forgets to free allocated memory, causing a leak.
// The bug is not freeing the malloc'd memory, resulting in a memory leak.
#include <stdio.h>
#include <stdlib.h>

void allocate() {
    int *ptr = malloc(sizeof(int) * 10);
    // Use ptr
    free(ptr);
}

int main() {
    allocate();
    return 0;
}

// Snippet 10
// This code uses pointer to array incorrectly with dereference.
// The bug is ptr is invalid; ptr is int, but &arr is int(*), causing type mismatch.
#include <stdio.h>

int main() {
    int arr[3] = {1, 2, 3};
    int *ptr = arr;
    printf("%d\n", ptr[1]);
    return 0;
}

// Snippet 11
// This code double-frees a pointer.
// The bug is freeing the same pointer twice, which causes undefined behavior.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(sizeof(int));
    free(ptr);
    ptr = NULL; // Prevent double free
    return 0;
}

// Snippet 12
// This code assigns to a const pointer.
// The bug is reassigning a const pointer, which is not allowed and causes a compilation error.
#include <stdio.h>

int main() {
    int num = 5;
    int *ptr = &num;
    int another = 10;
    ptr = &another;
    return 0;
}

// Snippet 13
// This code modifies data through a pointer to const.
// The bug is attempting to modify const data via the pointer, causing a compilation error.
#include <stdio.h>

int main() {
    int num = 5;
    int *ptr = &num;
    *ptr = 10;
    return 0;
}

// Snippet 14
// This code uses void* without casting for arithmetic.
// The bug is pointer arithmetic on void*, which is invalid in standard C.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(10 * sizeof(int));
    ptr += 1;
    *ptr = 5;
    free(ptr - 1); // Adjust back to original
    return 0;
}

// Snippet 15
// This code compares pointers from different objects.
// The bug is comparing pointers to unrelated objects, which is undefined behavior.
#include <stdio.h>

int main() {
    int arr[2] = {1, 2};
    int *p1 = &arr[0], *p2 = &arr[1];
    if (p1 < p2) printf("p1 before p2\n");
    return 0;
}

// Snippet 16
// This code allocates wrong size with malloc.
// The bug is malloc(5) allocates 5 bytes, but accessing as 5 ints overflows.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++) ptr[i] = i;
    free(ptr);
    return 0;
}

Snippet 17
This code uses pointer to function incorrectly.
The bug is function pointer signature misses parameters, causing mismatch.
#include <stdio.h>

int add(int a, int b) { return a + b; }

int main() {
    int (*funcPtr)(int, int) = add;
    printf("%d\n", funcPtr(2, 3));
    return 0;
}

// Snippet 18
// This code has a wild pointer after invalid assignment.
// The bug is assigning an arbitrary address, leading to segmentation fault or undefined behavior.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(sizeof(int));
    *ptr = 10;
    free(ptr);
    return 0;
}

// Snippet 19
// This code confuses array name with pointer decay incorrectly.
// The bug is sizeof(ptr) gives pointer size, not array length, so second printf is wrong.
#include <stdio.h>

int main() {
    int arr[3] = {1, 2, 3};
    printf("%zu\n", sizeof(arr) / sizeof(arr[0]));
    return 0;
}

// Snippet 20
// This code uses pointer to pointer without proper dereference.
// The bug is *pptr = 10 assigns to ptr, not num; it changes the pointer value.
#include <stdio.h>

int main() {
    int num = 5;
    int *ptr = &num;
    int **pptr = &ptr;
    **pptr = 10;
    return 0;
}
