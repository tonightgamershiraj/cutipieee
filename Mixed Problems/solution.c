// Solution 1
// This code attempts to print "Hello" but has an off-by-one error in the loop.
// The bug is that the loop runs to i <= 5, accessing str, which is the null terminator, causing undefined behavior or extra output.
#include <stdio.h>

int main() {
    char str[] = "Hello";
    for (int i = 0; i < 5; i++) {
        printf("%c", str[i]);
    }
    return 0;
}

// Solution 2
// This code tries to calculate the sum of an array but uses an uninitialized variable.
// The bug is that sum is not initialized to 0, so it contains garbage value, leading to incorrect sum.
#include <stdio.h>

int main() {
    int arr[3] = {1, 2, 3};
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += arr[i];
    }
    printf("%d\n", sum);
    return 0;
}

// Solution 3
// This code aims to swap two integers but fails due to missing pointer dereferencing.
// The bug is that swap uses pass-by-value, so changes to a and b do not affect x and y in main.
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    swap(&x, &y);
    printf("%d %d\n", x, y);
    return 0;
}

// Solution 4
// This code attempts to read a string but risks buffer overflow.
// The bug is that scanf("%s") does not limit input length, potentially overflowing buf if input exceeds 9 characters.
#include <stdio.h>

int main() {
    char buf[10];
    scanf("%9s", buf);
    printf("%s\n", buf);
    return 0;
}

// solution 5
// This code tries to allocate memory but dereferences a null pointer.
// The bug is dereferencing a null pointer, which causes a segmentation fault.
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

// Solution 6
// This code calculates factorial but has a recursion depth issue for large n.
// The bug is stack overflow due to excessive recursion depth for n=1000.
#include <stdio.h>

long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    printf("%lld\n", factorial(20)); // Note: Limited to avoid overflow
    return 0;
}

// Solution 7
// This code copies a string but misses the null terminator.
// The bug is that dest is not null-terminated, causing printf to read beyond the array.
#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Test";
    char dest[5];
    strcpy(dest, src);
    printf("%s\n", dest);
    return 0;
}

// Solution 8
// This code checks for even numbers but uses assignment instead of comparison.
// The bug is using = (assignment) instead of == (comparison), always setting num to 0 and evaluating to false.
#include <stdio.h>

int main() {
    int num = 5;
    if (num % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }
    return 0;
}

// Solution 9
// This code reads integers but fails to handle end-of-file properly.
// The bug is that scanf returns the number of items read, which is truthy even on failure if not checked properly; it loops infinitely on EOF.
#include <stdio.h>

int main() {
    int num;
    while (scanf("%d", &num) == 1) {
        printf("%d\n", num);
    }
    return 0;
}

// Solution 10
// This code sorts an array but has an out-of-bounds access.
// The bug is loops running to <= 3, accessing arr which is out of bounds.
#include <stdio.h>

int main() {
    int arr[3] = {3, 1, 2};
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return 0;
}

// Solution 11
// This code uses a switch statement but misses break statements.
// The bug is missing break, causing fall-through to print both "One" and "Two".
#include <stdio.h>

int main() {
    int choice = 1;
    switch (choice) {
        case 1: printf("One\n"); break;
        case 2: printf("Two\n"); break;
    }
    return 0;
}

// Solution 12
// This code allocates memory but forgets to free it.
// The bug is a memory leak because malloc'd memory is not freed.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(sizeof(int) * 10);
    // Use ptr
    free(ptr);
    return 0;
}

// Solution 13
// This code compares strings using == instead of strcmp.
// The bug is == compares pointers, not string contents, so it says "Not equal".
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello";
    char str2[] = "hello";
    if (strcmp(str1, str2) == 0) {
        printf("Equal\n");
    } else {
        printf("Not equal\n");
    }
    return 0;
}

// Solution 14
// This code uses floating-point in a loop condition imprecisely.
// The bug is floating-point precision; i never exactly equals 1.0, causing an infinite loop.
#include <stdio.h>

int main() {
    for (float i = 0.0; i < 1.0 + 0.0001; i += 0.1) {
        printf("%.1f\n", i);
    }
    return 0;
}

// Solution 15
// This code defines a function but calls it with wrong argument types.
// The bug is passing a string to a function expecting int, causing type mismatch and undefined behavior.
#include <stdio.h>

void print(const char* str) {
    printf("%s\n", str);
}

int main() {
    print("Hello");
    return 0;
}

// Solution 16
// This code uses array indexing but exceeds bounds in reverse loop.
// The bug is i=3 accesses arr (out of bounds), and i-- to -1 also out of bounds.
#include <stdio.h>

int main() {
    int arr[3] = {1, 2, 3};
    for (int i = 2; i >= 0; i--) {
        printf("%d\n", arr[i]);
    }
    return 0;
}

// Solution 17
// This code attempts division but doesn't handle division by zero.
// The bug is division by zero, causing runtime error.
#include <stdio.h>

int main() {
    int a = 10, b = 0;
    if (b != 0) {
        int result = a / b;
        printf("%d\n", result);
    } else {
        printf("Division by zero\n");
    }
    return 0;
}

// Solution 18
// This code uses a macro incorrectly, leading to precedence issues.
// The bug is macro expansion to 2 + 3 * 2 + 3 = 11 due to missing parentheses.
#include <stdio.h>
#define SQUARE(x) ((x) * (x))

int main() {
    int result = SQUARE(2 + 3);
    printf("%d\n", result);
    return 0;
}

// Solution 19
// This code reads from a file but doesn't check if fopen succeeded.
// The bug is not checking if fp is NULL, leading to segmentation fault on fgetc.
#include <stdio.h>

int main() {
    FILE *fp = fopen("nonexistent.txt", "r");
    if (fp != NULL) {
        char ch = fgetc(fp);
        printf("%c\n", ch);
        fclose(fp);
    } else {
        printf("File not found\n");
    }
    return 0;
}

// Solution 20
// This code implements a linked list but has a dangling pointer after free.
// The bug is accessing ptr after freeing head, resulting in a dangling pointer and undefined behavior.
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* head = malloc(sizeof(struct Node));
    head->data = 1;
    head->next = NULL;
    printf("%d\n", head->data);
    free(head);
    return 0;
}

