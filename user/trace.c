#include "kernel/types.h"
#include "kernel/syscall.h"
#include "user/user.h"

int main(int argc, char *argv[])
{
    write(1, "Hello World\n", 13);
    write(1, "Hello World\n", 13);
    trace(SYS_write);
    write(1, "Hello World\n", 13);
    write(1, "Hello World\n", 13);

    exit(0);
}