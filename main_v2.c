#include <stdio.h>
#include "math_utils.c"

int main() {
    int result = add(2, -4);  // Intentional regression
    printf("Result: %d\n", result);
    return 0;
}
