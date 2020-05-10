#include "types.h"
#include "stat.h"
#include "user.h"

int
fib_iter_c(int n) {
    int prev_prev_num = 0, prev_num = 0, cur_num = 1;

    if (n == 0) {
        return 0;
    }
    for (int i = 1; i < n ; i++) {
        prev_prev_num = prev_num;
        prev_num = cur_num;
        cur_num = prev_prev_num + prev_num;
    }
    return cur_num;
}


int
main(int argc, char *argv[])
{
    int i = 0;
    int j = 0;
    int rv;

    while (1) {
        rv = fib_iter_c(i);
        printf(1, "fib_iter(%d) = %d\n", i, rv);
        /* busy wait */
        for (j = 0; j < 10000; j++);
        i = i + 1;
    }

    exit();
}

