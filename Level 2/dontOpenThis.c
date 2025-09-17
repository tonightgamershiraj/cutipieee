// Snippet 1
// This code uses an assignment operator in an if condition instead of comparison.
// The bug is using = (assignment) instead of == (equality), which assigns 0 to x and always evaluates to false.
#include <stdio.h>

int main() {
    int x = 5;
    if (x == 0) {
        printf("Zero\n");
    }
    return 0;
}

// Snippet 2
// This code has a logical operator error in the condition.
// The bug is operator precedence; && has higher precedence than ||, but the intent might be (a && b) || a, which is always true if a is true—however, it's redundant.
#include <stdio.h>

int main() {
    int a = 1, b = 0;
    if (a && b) {
        printf("True\n");
    }
    return 0;
}

// Snippet 3
// This code uses a for loop with incorrect increment operator.
// The bug is i+++, which is invalid syntax; it's likely a typo for i++.
#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        printf("%d\n", i);
    }
    return 0;
}

// Snippet 4
// This code misuses the bitwise AND operator instead of logical AND.
// The bug is using & (bitwise) instead of && (logical); 1 & 2 is 0 (false), but logically both are true.
#include <stdio.h>

int main() {
    int a = 1, b = 2;
    if (a && b) {
        printf("Both non-zero\n");
    }
    return 0;
}

// Snippet 5
// This code has an infinite while loop due to missing update instruction.
// The bug is no increment for i inside the loop, causing an infinite loop.
#include <stdio.h>

int main() {
    int i = 0;
    while (i < 5) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}

// Snippet 6
// This code uses post-increment operator incorrectly in an expression.
// The bug is none, but if intent is pre-increment, y would be 6; assuming post-increment misunderstanding.
#include <stdio.h>

int main() {
    int x = 5;
    int y = ++x;
    printf("%d %d\n", x, y);
    return 0;
}

// Snippet 7
// This code has a switch statement without break instructions.
// The bug is missing break, causing fall-through to print both messages.
#include <stdio.h>

int main() {
    int choice = 1;
    switch (choice) {
        case 1: printf("One\n"); break;
        case 2: printf("Two\n"); break;
    }
    return 0;
}

// Snippet 8
// This code uses arithmetic operators with integer overflow.
// The bug is integer overflow (assuming 32-bit int), resulting in negative or wrong value.
#include <stdio.h>

int main() {
    long long a = 2000000000;
    long long b = a * 2;
    printf("%lld\n", b);
    return 0;
}

// Snippet 9
// This code misuses the ternary operator with incorrect syntax.
// The bug is missing colon in the second ternary, causing syntax error.
#include <stdio.h>

int main() {
    int x = 5;
    int y = x > 0 ? 1 : 0;
    printf("%s\n", y ? "Positive" : "Non-positive");
    return 0;
}

// Snippet 10
// This code has a do-while loop that executes zero times incorrectly.
// The bug is the condition i < 5 is false initially, but do-while executes at least once, printing 5 then stopping.
#include <stdio.h>

int main() {
    int i = 5;
    while (i < 5) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}

// Snippet 11
// This code uses bitwise shift operator on negative number.
// The bug is right-shifting a negative number, which is implementation-defined (often sign-extended).
#include <stdio.h>

int main() {
    unsigned int x = 4;
    unsigned int y = x >> 1;
    printf("%u\n", y);
    return 0;
}

// Snippet 12
// This code has an if-else chain with missing braces, leading to dangling else.
// The bug is ambiguous else attachment due to missing braces; else attaches to inner if.
#include <stdio.h>

int main() {
    int x = 1;
    if (x == 1) {
        if (x == 2)
            printf("Two\n");
    } else {
        printf("Not one\n");
    }
    return 0;
}

// Snippet 13
// This code uses modulus operator with zero divisor.
// The bug is modulus by zero, causing runtime error (division by zero).
#include <stdio.h>

int main() {
    int a = 10, b = 0;
    if (b != 0) {
        int c = a % b;
        printf("%d\n", c);
    }
    return 0;
}

// Snippet 14
// This code has a for loop with multiple instructions in init incorrectly.
// The bug is syntax error in for init; can't declare two types there.
#include <stdio.h>

int main() {
    int j = 0;
    for (int i = 0; i < 5; i++) {
        printf("%d\n", i);
    }
    return 0;
}

// Snippet 15
// This code misuses logical NOT operator on non-boolean.
// The bug is !x == 0; !5 is 0, 0==0 is true, but precedence makes it !(x == 0), which is true for x=5.
#include <stdio.h>

int main() {
    int x = 5;
    if (x == 0) {
        printf("Zero\n");
    }
    return 0;
}

// Snippet 16
// This code uses compound assignment operator incorrectly.
// The bug is space in +=, making it x + = 3 (syntax error).
#include <stdio.h>

int main() {
    int x = 5;
    x += 3;
    printf("%d\n", x);
    return 0;
}

// Snippet 17
// This code has a goto instruction jumping into a scope incorrectly.
// The bug is jumping over variable declaration, leading to uninitialized x or compilation error in some standards.
#include <stdio.h>

int main() {
    int x = 5;
    goto label;
label:
    printf("%d\n", x);
    return 0;
}

// Snippet 18
// This code uses equality operator with floating points.
// The bug is floating-point precision; 0.1 + 0.2 != exactly 0.3, so not equal.
#include <stdio.h>
#include <math.h>

int main() {
    float a = 0.1 + 0.2;
    if (fabs(a - 0.3) < 1e-6) {
        printf("Equal\n");
    } else {
        printf("Not equal\n");
    }
    return 0;
}

// Snippet 19
// This code has a continue instruction outside a loop.
// The bug is continue used outside a loop, causing compilation error.
#include <stdio.h>

int main() {
    for (int x = 5; x > 0; x--) {
        if (x == 3) continue;
        printf("%d\n", x);
    }
    return 0;
}

// Snippet 20
// This code uses sizeof operator incorrectly on an expression.
// The bug is sizeof x + 1 expands to sizeof(x) + 1, but if intent is sizeof(x + 1), needs parentheses.
#include <stdio.h>

int main() {
    int x = 5;
    printf("%zu\n", sizeof(x + 1));
    return 0;
}
