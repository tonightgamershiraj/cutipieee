#include <stdio.h>

int main() {
    int x = 5;
    int y = x++;
    printf("%d %d\n", x, y); // Expected x=6, y=5, but correct; wait, no bug? For demo: assume misuse.
}
