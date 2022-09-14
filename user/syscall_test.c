#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"


void main(int argc, char **argv)
{
    int cpu = get_cpu();
    printf("syscall test: get cpu = %d\n", cpu);
    if(cpu == 0)
        set_cpu(1);
    else
        set_cpu(0);
    cpu = get_cpu();
    printf("syscall test: get cpu after change: %d\n", cpu);
    exit(0);
}