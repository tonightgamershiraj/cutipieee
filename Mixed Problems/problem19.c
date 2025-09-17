#include <stdio.h>

int main() {
    FILE *fp = fopen("nonexistent.txt", "r");
    char ch = fgetc(fp);
    printf("%c\n", ch);
    fclose(fp);
    return 0;
}
