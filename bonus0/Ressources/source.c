#include <stdio.h>

void        p(char *s1, char *s2)
{
    char    buf[4096];
    char    *chr;
    
    puts(s2);
    read(0, buf, 4096);
    chr = strchr(buf, '\n');
    *chr = 0;
    strncpy(s1, buf, 20);
    return ;
}

void        pp(char *buf)
{
    char    s1[20];
    char    s2[20];
}

int         main(int ac, char **av)
{
    char    buf[42];

    pp(buf);
    puts(buf);
    return (0);    
}
