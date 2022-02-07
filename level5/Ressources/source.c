#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int m = 0;

void    o(void)
{
    system("/bin/sh");
    exit(1);
}

void    n(void)
{
    char buf[512];
    
    fgets(buf, 512, stdin);
    printf(buf);
    exit(1);
}

int     main(void)
{
    n();
    return (0);
}
