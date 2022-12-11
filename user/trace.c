#include "kernel/types.h"
#include "kernel/syscall.h"
#include "user/user.h"

int main(int argc, char *argv[])
{
    // if (argc < 3)
    // {
    //     printf("Usage: trace <command> <arg1> <arg2> ...\n");
    // }

    // uint32_t syscall_id = 1 << atoi(argv[1]);
    // syscall(syscall_id, argv[2], argv[3], argv[4], argv[5], argv[6])

    write(1, "Hello World\n", 13);
    write(1, "Hello World\n", 13);
    trace(SYS_write);
    write(1, "Hello World\n", 13);
    write(1, "Hello World\n", 13);

    exit(0);
}