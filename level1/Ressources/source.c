#include <stdio.h>
#include <stdlib.h>

void    run(void)
{
    fwrite("Good... Wait what?\n", 1, 19, stdout);
    system("/bin/sh");
}

int     main(void)
{
    char ret_get[64];
    
    gets(ret_get);
    return (0);
}
