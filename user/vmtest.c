#include "kernel/types.h"
#include "kernel/syscall.h"
#include "user/user.h"

int main(int argc, char *argv[])
{
    char test[] = "AAAAAAAABBBBBBBB";
    printf("test addr for %s: %p\n", test, test);

    vmprint((uint64)test);
    char buf[1];
    read(0, buf, 1);
    // You can gdb and change address for this memeory in gdb!
    printf("test addr for %s: %p\n", test, test);

    exit(0);
}