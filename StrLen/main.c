#include <stdio.h>
#include "strlen.h"

static char string[] = "Hello, world";

main()
{
    int x = stringlen("Hello, world");
    printf("%d\n", x);

    int y = stringlen(string);
    printf("%d\n", y);

    int z = stringlen(&string[0]);
    printf("%d\n", z);
}
