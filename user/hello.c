#include "kernel/types.h"
#include "user/user.h"

int main() {
    int group = 1;
    printf("Hello userspace, Group %d\n", group);
    hello(group);
    return 0;
}

