#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int m = 0;

void p(char *buf)
{
    printf(buf);
}

void n(void)
{
    char buf[512];

    fgets(buf, 512, stdin)
    p(buf);
    if (m == 16930116)
    {
        system("/bin/cat /home/user/level5/.pass");
    }
}

int main(void)
{
    n();
    return (0);
}
