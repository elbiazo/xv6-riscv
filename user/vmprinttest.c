#include "kernel/types.h"
#include "kernel/syscall.h"
#include "user/user.h"

int main(int argc, char *argv[])
{
    uint64 test[] = {1, 2, 3, 4};
    printf("test addr: %p\n", test);
    vmprint((uint64)test);

    exit(0);
}