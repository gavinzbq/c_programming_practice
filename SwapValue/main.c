#include <stdio.h>
#include "swap.h"

static int m = 19;
static int n = 91;

main(void)
{
    //int m, n;
    //m = 19;
    //n = 91;

    printf ("original m is: %d\n", m);
    printf ("original n is: %d\n", n);

    swap(&m, &n);

    printf ("now m is: %d\n", m);
    printf ("now n is: %d\n", n);
    
    return 0;
}
