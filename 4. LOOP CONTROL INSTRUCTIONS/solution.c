// Snippet 1
// This code attempts to print numbers 0 to 4 but creates an infinite loop.
// The bug is the missing increment for i inside the loop, causing it to run forever.
#include <stdio.h>

int main() {
    int i = 0;
    while (i < 5) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}

// Snippet 2
// This for loop has an off-by-one error, printing one extra number.
// The bug is the condition i <= 5, which includes 5, but if intent is 0-4, it's incorrect.
#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        printf("%d\n", i);
    }
    return 0;
}

// Snippet 3
// This do-while loop executes at least once even when the condition is false initially.
// The bug is do-while always runs once, printing 5 despite the condition being false; use while if zero executions are intended.
#include <stdio.h>

int main() {
    int i = 5;
    while (i < 5) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}

// Snippet 4
// This loop uses break incorrectly, exiting too early.
// The bug is break exits after i=1, skipping 3 and 4; if intent is to skip only 2, use continue.
#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        if (i == 2) continue;
        printf("%d\n", i);
    }
    return 0;
}

// Snippet 5
// This while loop has a floating-point condition leading to an infinite loop.
// The bug is floating-point precision; i never exactly equals 1.0, causing infinite execution.
#include <stdio.h>

int main() {
    float i = 0.0;
    while (i < 1.0 + 0.0001) {
        printf("%.1f\n", i);
        i += 0.1;
    }
    return 0;
}

// Snippet 6
// This nested for loop swaps loop variables incorrectly.
// The bug is redeclaring i in the inner loop, shadowing the outer i and causing unexpected output.
#include <stdio.h>

int main() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d %d\n", i, j);
        }
    }
    return 0;
}

// Snippet 7
// This loop uses continue outside a loop context.
// The bug is continue can only be used inside loops, causing a compilation error.
#include <stdio.h>

int main() {
    for (int i = 0; i < 1; i++) {
        int x = 5;
        if (x > 0) continue;
        printf("%d\n", x);
    }
    return 0;
}

// Snippet 8
// This for loop has a syntax error in the increment part.
// The bug is i+1 instead of i++, which doesn't update i and causes an infinite loop.
#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        printf("%d\n", i);
    }
    return 0;
}

// Snippet 9
// This while loop uses goto incorrectly, jumping out improperly.
// The bug is goto skips the increment, but it's valid; however, it can lead to maintenance issues—avoid goto.
#include <stdio.h>

int main() {
    int i = 0;
    while (i < 5) {
        printf("%d\n", i);
        if (i == 2) break;
        i++;
    }
    return 0;
}

// Snippet 10
// This do-while has a semicolon after the while, making it invalid.
// The bug is none; the code is valid. For a bug, assume extra semicolon: while (i < 5); which would make it not loop.
#include <stdio.h>

int main() {
    int i = 0;
    do {
        printf("%d\n", i);
        i++;
    } while (i < 5);
    return 0;
}

// Snippet 11
// This loop uses an uninitialized loop variable.
// The bug is i is uninitialized, leading to undefined starting value and behavior.
#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        printf("%d\n", i);
    }
    return 0;
}

// Snippet 12
// This nested loop has break that only exits the inner loop.
// The bug is break only exits inner loop, continuing outer; if intent is to exit both, use flag or goto.
#include <stdio.h>

int main() {
    int exit_outer = 0;
    for (int i = 0; i < 3 && !exit_outer; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 1) {
                exit_outer = 1;
                break;
            }
            printf("%d %d\n", i, j);
        }
    }
    return 0;
}

// Snippet 13
// This while loop condition is always false, never executing.
// The bug is the condition i < 0 is false from start, so loop body never runs.
#include <stdio.h>

int main() {
    int i = -5;
    while (i < 0) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}

// Snippet 14
// This for loop has multiple declarations in init.
// The bug is syntax error: can't have two 'int' in for init.
#include <stdio.h>

int main() {
    for (int i = 0, j = 0; i < 5; i++) {
        printf("%d\n", i);
    }
    return 0;
}

// Snippet 15
// This loop uses continue in a way that skips increment.
// The bug is continue skips i++, causing infinite loop for even i.
#include <stdio.h>

int main() {
    int i = 0;
    while (i < 5) {
        i++;
        if (i % 2 == 0) continue;
        printf("%d\n", i);
    }
    return 0;
}

// Snippet 16
// This goto jumps into the middle of a loop, skipping initialization.
// The bug is jumping into loop skips i declaration and increment, causing undefined behavior or errors.
#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        printf("%d\n", i);
    }
    return 0;
}

// Snippet 17
// This do-while has the condition always true.
// The bug is while (1) creates an intentional infinite loop; add break condition if not desired.
#include <stdio.h>

int main() {
    int i = 0;
    do {
        printf("%d\n", i);
        i++;
        if (i >= 5) break;
    } while (1);
    return 0;
}

// Snippet 18
// This for loop omits the condition, creating infinite loop.
// The bug is missing condition, making it infinite; add a condition or break.
#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        printf("%d\n", i);
    }
    return 0;
}

// Snippet 19
// This loop uses break in a switch inside, but affects the loop.
// The bug is break in switch only exits switch, not loop; it's fine, but if intent is to exit loop, use labeled break or flag.
#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        if (i == 2) break;
        printf("%d\n", i);
    }
    return 0;
}

// Snippet 20
// This while loop decrements incorrectly, causing infinite loop.
// The bug is i++ instead of i--, increasing i and preventing condition from becoming false.
#include <stdio.h>

int main() {
    int i = 5;
    while (i > 0) {
        printf("%d\n", i);
        i--;
    }
    return 0;
}
