#include <stdio.h>

int m = 0;

void        v(void)
{
    char    buf[512];

    fgets(buf, 512, stdin);
    printf(buf);
    if (m == 64)
    {
        fwrite("Wait what?!\n", 12, stdout);
        system("/bin/sh");
    }
}
int         main(void)
{
    v();
    return (0);
}
