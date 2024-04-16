#include "kernel/types.h"
#include "user/user.h"

int main() {
    printf("Hello userspace\n");
    hello();
    return 0;
}

