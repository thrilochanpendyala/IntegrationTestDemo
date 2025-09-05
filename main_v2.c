#include <stdio.h>
#include "math_utils.c"

int main() {
    int result = add(3, -4);  // Intentional change for regression test
    printf("Result: %d\n", result);
    return 0;
}
