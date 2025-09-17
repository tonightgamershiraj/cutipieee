// Snippet 1
// This code uses an uninitialized variable, leading to undefined behavior.
// The bug is that x is declared but not initialized, so it holds a garbage value.
#include <stdio.h>

int main() {
    int x = 0;
    printf("%d\n", x);
    return 0;
}

// Snippet 2
// This code attempts to modify a constant variable.
// The bug is assigning a new value to a const variable, which is not allowed and causes a compilation error.
#include <stdio.h>

int main() {
    int num = 5;
    num = 10;
    printf("%d\n", num);
    return 0;
}

// Snippet 3
// This code redeclares a variable in the same scope.
// The bug is redeclaring x in the same block scope, which is invalid in C and causes a compilation error.
#include <stdio.h>

int main() {
    int x = 1;
    x = 2;
    printf("%d\n", x);
    return 0;
}

// Snippet 4
// This code uses a variable out of its scope.
// The bug is accessing x outside its block scope, where it's no longer visible, causing a compilation error.
#include <stdio.h>

int main() {
    int x;
    if (1) {
        x = 5;
    }
    printf("%d\n", x);
    return 0;
}

// Snippet 5
// This code misuses the static keyword, causing unexpected persistence.
// The bug is that count is not static, so it resets each call, printing 1 twice instead of incrementing.
#include <stdio.h>

void func() {
    static int count = 0;
    count++;
    printf("%d\n", count);
}

int main() {
    func();
    func();
    return 0;
}

// Snippet 6
// This code defines a constant with #define but has a syntax error in usage.
// The bug is attempting to assign to PI, which is a macro constant and cannot be modified.
#include <stdio.h>
#define PI 3.14

int main() {
    printf("%f\n", PI);
    return 0;
}

// Snippet 7
// This code uses auto keyword incorrectly in modern C.
// The bug is that auto is redundant for local variables in C (it's the default), but if used incorrectly, it might confuse or cause issues in some contexts; however, it's valid but unnecessary.
#include <stdio.h>

int main() {
    int x = 5;
    printf("%d\n", x);
    return 0;
}

// Snippet 8
// This code declares a variable with extern inside a function incorrectly.
// The bug is that extern declares x but doesn't define it, leading to a linker error if not defined elsewhere.
#include <stdio.h>

int x = 0; // Define globally

int main() {
    x = 5;
    printf("%d\n", x);
    return 0;
}

// Snippet 9
// This code uses a constant pointer incorrectly by reassigning it.
// The bug is reassigning a const pointer, which is not allowed as it can't point to a new address.
#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;
    int another = 20;
    ptr = &another;
    return 0;
}

// Snippet 10
// This code misuses volatile keyword, potentially leading to optimization issues.
// The bug is that without volatile, the compiler might optimize the loop away, assuming flag doesn't change.
#include <stdio.h>

int main() {
    volatile int flag = 0;
    // Assume flag is set by hardware/interrupt
    while (!flag) {}
    printf("Flag set\n");
    return 0;
}

// Snippet 11
// This code uses a variable name that is a C keyword.
// The bug is using 'int' as a variable name, which is a reserved keyword, causing a compilation error.
#include <stdio.h>

int main() {
    int num = 5;
    printf("%d\n", num);
    return 0;
}

// Snippet 12
// This code declares a constant array but tries to modify it.
// The bug is modifying a const array element, which is not allowed and causes a compilation error.
#include <stdio.h>

int main() {
    int arr[2] = {1, 2};
    arr[0] = 3;
    printf("%d\n", arr[0]);
    return 0;
}

// Snippet 13
// This code uses register keyword but assigns an address to it.
// The bug is taking the address of a register variable, which is not allowed as register vars may not have addresses.
#include <stdio.h>

int main() {
    int x = 5;
    int *ptr = &x;
    printf("%d\n", *ptr);
    return 0;
}

// Snippet 14
// This code has a type mismatch in variable assignment.
// The bug is assigning a float to an int without explicit cast, leading to truncation and potential warnings.
#include <stdio.h>

int main() {
    int x = (int)5.5;
    printf("%d\n", x);
    return 0;
}

// Snippet 15
// This code uses static incorrectly in a global context.
// The bug is none actually (it's valid), but if intent is file-local, it's correct; for demonstration, assume misuse if global access is needed across files.
#include <stdio.h>

int x = 5;

void func() {
    x = 10;
}

int main() {
    func();
    printf("%d\n", x);
    return 0;
}

// Snippet 16
// This code defines a macro constant with expression but misses parentheses.
// The bug is macro expands to 10 + 5 * 2 = 20 due to operator precedence without parentheses.
#include <stdio.h>
#define MAX (10 + 5)

int main() {
    int result = MAX * 2;
    printf("%d\n", result);
    return 0;
}

// Snippet 17
// This code uses const incorrectly with a pointer to non-const data.
// The bug is modifying data through a const pointer, which is not allowed.
#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;
    *ptr = 20;
    return 0;
}

// Snippet 18
// This code declares a variable with typedef incorrectly as a keyword.
// The bug is treating 'typedef' as a variable, but it's a keyword and can't be used that way.
#include <stdio.h>

typedef int Integer;
int main() {
    Integer x = 5;
    return 0;
}

// Snippet 19
// This code uses enum as a variable name.
// The bug is using 'enum' as a variable name, which is a reserved keyword, causing a compilation error.
#include <stdio.h>

int main() {
    int myEnum = 1;
    printf("%d\n", myEnum);
    return 0;
}

// Snippet 20
// This code initializes a const variable after declaration.
// The bug is that const variables must be initialized at declaration; assigning later is invalid.
#include <stdio.h>

int main() {
    const int x = 5;
    printf("%d\n", x);
    return 0;
}


