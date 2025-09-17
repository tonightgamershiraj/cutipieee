// Snippet 1
// This code uses assignment instead of comparison in an if condition.
// The bug is = assigns 0 to x and evaluates to false, so the block never executes regardless of initial x.
#include <stdio.h>

int main() {
    int x = 5;
    if (x == 0) {
        printf("Zero\n");
    }
    return 0;
}

// Snippet 2
// This code has a dangling else due to missing braces.
// The bug is the else attaches to the inner if, so for x=1, it prints "Not greater than 0" unexpectedly.
#include <stdio.h>

int main() {
    int x = 1;
    if (x > 0) {
        if (x > 10)
            printf("Greater than 10\n");
    } else {
        printf("Not greater than 0\n");
    }
    return 0;
}

// Snippet 3
// This switch statement lacks break statements, causing fall-through.
// The bug is missing break, so it prints both "Monday" and "Tuesday" for day=1.
#include <stdio.h>

int main() {
    int day = 1;
    switch (day) {
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
    }
    return 0;
}

// Snippet 4
// This ternary operator has mismatched types in branches.
// The bug is one branch is int and the other is string, causing type mismatch and compilation error.
#include <stdio.h>

int main() {
    int x = 5;
    const char* result = x > 0 ? "Positive" : "Non-positive";
    printf("%s\n", result);
    return 0;
}

// Snippet 5
// This if condition uses exact equality for floating-point numbers.
// The bug is floating-point precision error; 0.1 + 0.2 != exactly 0.3, so the condition is false.
#include <stdio.h>
#include <math.h>

int main() {
    float a = 0.1 + 0.2;
    if (fabs(a - 0.3) < 1e-6) {
        printf("Equal\n");
    }
    return 0;
}

// Snippet 6
// This if-else chain has logical operator precedence issues.
// The bug is && has higher precedence than ||, making it (x > 0 && x < 10) || x == 5, which is redundant for x=5.
#include <stdio.h>

int main() {
    int x = 5;
    if ((x > 0 && x < 10) || x == 5) {
        printf("In range or 5\n");
    }
    return 0;
}

// Snippet 7
// This switch uses a non-integer expression for the condition.
// The bug is switch requires an integer expression; float is invalid and causes compilation error.
#include <stdio.h>

int main() {
    int val = 1;
    switch (val) {
        case 1: printf("One\n"); break;
    }
    return 0;
}

// Snippet 8
// This nested if lacks proper bracing, leading to unexpected execution.
// The bug is the else attaches to the inner if, but without braces, it's ambiguous; for x=10, it prints "Medium".
#include <stdio.h>

int main() {
    int x = 10;
    if (x > 5) {
        if (x > 15) {
            printf("Large\n");
        } else {
            printf("Medium\n");
        }
    }
    return 0;
}

// Snippet 9
// This if condition is always true due to tautology.
// The bug is the condition is always true, making the if redundant and potentially hiding logic errors.
#include <stdio.h>

int main() {
    int x = 5;
    if (x == 5) {
        printf("Is 5\n");
    }
    return 0;
}

// Snippet 10
// This switch has duplicate case labels.
// The bug is duplicate case 1, which is invalid and causes a compilation error.
#include <stdio.h>

int main() {
    int x = 1;
    switch (x) {
        case 1: printf("One\n"); break;
        case 2: printf("Two\n"); break;
    }
    return 0;
}

// Snippet 11
// This ternary operator is used without parentheses, causing precedence issues.
// The bug is none severe, but if intent is different grouping, it's x > 0 ? (1 + 2) : (3 + 4); it's correct as is.
#include <stdio.h>

int main() {
    int x = 5;
    printf("%d\n", (x > 0) ? (1 + 2) : (3 + 4));
    return 0;
}

// Snippet 12
// This if uses bitwise AND instead of logical AND.
// The bug is & (bitwise) evaluates to 0 (false), but logical && would short-circuit and be false too; misuse for logic.
#include <stdio.h>

int main() {
    int a = 1, b = 0;
    if (a && b) {
        printf("Both true\n");
    }
    return 0;
}

// Snippet 13
// This switch misses a default case, leading to no action for unmatched values.
// The bug is no default, so for x=3, nothing happens; add default for handling.
#include <stdio.h>

int main() {
    int x = 3;
    switch (x) {
        case 1: printf("One\n"); break;
        default: printf("Other\n"); break;
    }
    return 0;
}

// Snippet 14
// This if condition uses an uninitialized variable.
// The bug is x is uninitialized, leading to undefined behavior in the condition.
#include <stdio.h>

int main() {
    int x = 0;
    if (x > 0) {
        printf("Positive\n");
    }
    return 0;
}

// Snippet 15
// This ternary has side effects in multiple branches.
// The bug is printf returns int (chars printed), but using it for side effects in ternary is valid but y gets return value.
#include <stdio.h>

int main() {
    int x = 5;
    x > 0 ? printf("Pos\n") : printf("Neg\n");
    return 0;
}

// Snippet 16
// This if-else has empty blocks, leading to no-op.
// The bug is semicolon after if, making it empty; else has no matching if, causing compilation error.
#include <stdio.h>

int main() {
    int x = 5;
    if (x > 0) {
        // Positive action
    } else {
        printf("Non-positive\n");
    }
    return 0;
}

// Snippet 17
// This switch case label is not constant.
// The bug is case label must be constant expression; y is variable, causing compilation error.
#include <stdio.h>

int main() {
    int x = 1;
    switch (x) {
        case 2: printf("Match\n"); break;
    }
    return 0;
}

// Snippet 18
// This if condition has redundant parentheses causing no issue, but assume side effect bug.
// The bug is assignment inside parentheses still assigns, but condition is 0 (false).
#include <stdio.h>

int main() {
    int x = 5;
    if (x == 0) {
        printf("Zero\n");
    }
    return 0;
}

// Snippet 19
// This ternary is nested without proper parentheses.
// The bug is ambiguity in nesting; it's parsed as (x > 0 ? (x > 10 ? 2 : 1) : 0), which is fine, but for clarity add parens.
#include <stdio.h>

int main() {
    int x = 5;
    int result = (x > 0) ? ((x > 10) ? 2 : 1) : 0;
    printf("%d\n", result);
    return 0;
}

// Snippet 20
// This if uses a void expression in the condition.
// The bug is printf returns int (chars printed), which is truthy if >0, but using void-like for condition is poor practice though valid.
#include <stdio.h>

int main() {
    printf("Check\n");
    int condition = 1; // Or some check
    if (condition) {
        printf("True\n");
    }
    return 0;
}
