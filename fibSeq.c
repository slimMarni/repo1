#include <stdio.h>

int main() {
    int a = 0, b = 1;
    int iterator = 0;
    int sw = 1; // Use int instead of bool

    while (iterator < 10) {
        if (sw) {
            printf("%d\n", a);
            a = a + b;
            sw = !sw;
        } else {
            printf("%d\n", b);
            b = b + a;
            sw = !sw;
        }
        iterator++;
    }

    return 0;
}
