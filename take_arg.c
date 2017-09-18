#include "corewar.h"

int     take_args(t_proc *pr, t_bs *base)
{
    int a;
    char *binary;
    int args[3];

    a = 0;
    binary = get_binary(pr->pc, base);
    printf("%s\n", binary);

    while (a < 3)
    {
        if (binary[2 * a] == '0' && binary[2 * a + 1] == '1')
            args[a] = 1;
        else if (binary[2 * a] == '1' && binary[2 * a + 1] == '1')
            args[a] = 2;
        else if (binary[2 * a] == '1' && binary[2 * a + 1] == '0')
            args[a] = 3;
        else
            return (0);
        a++;
    }
    pr->args = args;
    return (1);
}

