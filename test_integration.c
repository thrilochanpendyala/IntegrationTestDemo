#include <assert.h>
#include "math_utils.c"

void test_add() {
    assert(add(3, 4) == 7);
    assert(add(-2, 2) == 0);
    assert(add(0, 0) == 0);
}

int main() {
    test_add();
    printf("All integration tests passed.\n");
    return 0;
}
