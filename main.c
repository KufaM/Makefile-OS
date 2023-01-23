#include <stdio.h>
#include "vystup.h"
float inputValue(const char side);

int checkTriangle(float a, float b, float c) {
    return a + b > c && a + c > b && b + c > a;
}

void report(float a, float b, float c) {
    printf("Sides a = %.2f, b = %.2f, c = %.2f are %s possible values of a triangle.\n",
           a, b, c, checkTriangle(a, b, c) ? "" : "not");
}

int next() {
    int keyPress;
    int countOfChar = 0;
    printf("Press space to continue.\n");
    keyPress = getchar();
    while (getchar() != '\n') {
        countOfChar++;
    }
    if (countOfChar != 0) {
        return 0;
    } else if (keyPress == ' ') {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    float a, b, c;
    do {
        a = inputValue('a');
        b = inputValue('b');
        c = inputValue('c');
        report(a, b, c);
    } while (next());
    return 0;
}