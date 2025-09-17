// Snippet 1
// This code defines a function without a return statement.
// The bug is the function add lacks a return statement, leading to undefined behavior when printing the result.
#include <stdio.h>

int add(int a, int b) {
    int sum = a + b;
    return sum;
}

int main() {
    printf("%d\n", add(2, 3));
    return 0;
}

// Snippet 2
// This code attempts to swap values but uses pass-by-value.
// The bug is parameters are passed by value, so changes inside swap don't affect main's variables.
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

// Snippet 3
// This recursive function lacks a base case, causing infinite recursion.
// The bug is no base case to stop recursion, leading to stack overflow.
#include <stdio.h>

int countDown(int n) {
    if (n <= 0) return 0;
    return countDown(n - 1);
}

int main() {
    printf("%d\n", countDown(5));
    return 0;
}

// Snippet 4
// This function returns the address of a local variable.
// The bug is returning a pointer to a local variable, which becomes invalid after the function returns, causing undefined behavior.
#include <stdio.h>
#include <stdlib.h>

int* getNum() {
    int* num = malloc(sizeof(int));
    *num = 42;
    return num;
}

int main() {
    int* ptr = getNum();
    printf("%d\n", *ptr);
    free(ptr);
    return 0;
}

// Snippet 5
// This code calls a function without a prototype, assuming implicit declaration.
// The bug is no prototype for add before main, leading to implicit declaration warning or error in strict C standards.
#include <stdio.h>

int add(int a, int b);

int main() {
    printf("%d\n", add(2, 3));
    return 0;
}

int add(int a, int b) {
    return a + b;
}

// Snippet 6
// This recursive factorial has an incorrect base case.
// The bug is base case assumes n==1, but for n=0, it recurses infinitely since 0 !=1.
#include <stdio.h>

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    printf("%d\n", factorial(0));
    return 0;
}

// Snippet 7
// This void function attempts to return a value.
// The bug is void function can't return a value, causing compilation error.
#include <stdio.h>

const char* greet() {
    return "Hello";
}

int main() {
    printf("%s\n", greet());
    return 0;
}

// Snippet 8
// This code has a function redefinition error.
// The bug is defining the same function twice, causing a redefinition compilation error.
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    return 0;
}

// Snippet 9
// This recursive function causes stack overflow for large input.
// The bug is inefficient recursion with exponential calls, leading to stack overflow for large n.
#include <stdio.h>

int fib(int n) {
    if (n <= 1) return n;
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    printf("%d\n", fib(50));
    return 0;
}

// Snippet 10
// This function uses incorrect number of arguments in call.
// The bug is calling add with only one argument, but it expects two, causing compilation error or undefined behavior.
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    printf("%d\n", add(2, 3));
    return 0;
}

// Snippet 11
// This code misses including a header for a standard function.
// The bug is using pow without #include <math.h>, leading to implicit declaration warning or error.
#include <stdio.h>
#include <math.h>

int main() {
    printf("%f\n", pow(2, 3));
    return 0;
}

// Snippet 12
// This recursive function has a wrong recursive call.
// The bug is recursive call sum(n) doesn't decrease n, causing infinite recursion.
#include <stdio.h>

int sum(int n) {
    if (n == 0) return 0;
    return n + sum(n - 1);
}

int main() {
    printf("%d\n", sum(5));
    return 0;
}

// Snippet 13
// This function prototype doesn't match the definition.
// The bug is return type mismatch between prototype (int) and definition (float), causing compilation error.
#include <stdio.h>

int add(int a, int b);

int main() {
    printf("%d\n", add(2, 3));
    return 0;
}

int add(int a, int b) {
    return a + b;
}

// Snippet 14
// This code uses a function as if it were recursive but isn't.
// The bug is n-- is post-decrement, so recursive call gets original n, causing infinite recursion.
#include <stdio.h>

void print(int n) {
    if (n > 0) {
        printf("%d\n", n);
        print(n - 1);
    }
}

int main() {
    print(3);
    return 0;
}

// Snippet 15
// This function has too many arguments in the definition.
// The bug is calling max with two arguments, but it expects three, causing compilation error.
#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    printf("%d\n", max(1, 2));
    return 0;
}

// Snippet 16
// This recursive function doesn't handle negative input.
// The bug is no check for negative n, leading to infinite recursion.
#include <stdio.h>

int factorial(int n) {
    if (n < 0) return -1; // Error
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    printf("%d\n", factorial(-1));
    return 0;
}

// Snippet 17
// This code defines a function inside another function (not standard C).
// The bug is nested function definition, which is a GCC extension but not standard C, causing portability issues or errors.
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    printf("%d\n", add(2, 3));
    return 0;
}

// Snippet 18
// This function uses variable arguments incorrectly without va_list.
// The bug is missing <stdarg.h> and va_list handling for variable arguments, leading to compilation errors.
#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...) {
    va_list args;
    va_start(args, count);
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int);
    }
    va_end(args);
    return total;
}

int main() {
    printf("%d\n", sum(2, 3, 4));
    return 0;
}

// Snippet 19
// This recursive function has integer overflow.
// The bug is int overflow for large exponents, as 2^31 exceeds signed int range.
#include <stdio.h>

long long power(int base, int exp) {
    if (exp == 0) return 1;
    return (long long)base * power(base, exp - 1);
}

int main() {
    printf("%lld\n", power(2, 31));
    return 0;
}

// Snippet 20
// This code calls a recursive function with no termination.
// The bug is no base case, causing infinite recursion and stack overflow.
#include <stdio.h>

void recurse(int count) {
    if (count <= 0) return;
    recurse(count - 1);
}

int main() {
    recurse(5);
    return 0;
}
