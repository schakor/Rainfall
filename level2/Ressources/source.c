#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void        p(void)
{
    char    tab[76];
    int     eip;

    fflush(stdout);
    gets(tab);
    eip = (int)(&tab + 80);
    if ((eip & 0xb0000000) == 0xb0000000)
    {
        printf("(%p)\n", (void *)eip);
        exit(0x1);
    }
    puts(tab);
    strdup(tab);
}

int         main(void)
{
    p();
    return (0);
}
