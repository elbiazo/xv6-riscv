#include "kernel/types.h"
#include "kernel/syscall.h"
#include "user/user.h"

int main(int argc, char *argv[])
{
    printf("Crash test!\n");
    memcpy(0, "Hello World\n", 100000);
    printf("Shouldn't hit this\n");

    exit(0);
}