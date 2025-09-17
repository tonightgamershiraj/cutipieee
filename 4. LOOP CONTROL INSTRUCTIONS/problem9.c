#include <stdio.h>

int main() {
    int i = 0;
    while (i < 5) {
        printf("%d\n", i);
        if (i == 2) goto end;
        i++;
    }
end:
    return 0;
}
