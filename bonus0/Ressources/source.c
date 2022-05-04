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
    int     len;

    p(s1, " - ");
    p(s2, " - ");
    strcpy(buf, s1);
    len = strlen(buf);
    buf[len] = ' ';
    buf[len + 1] = '\0';
    strcat(buf, s2);
    return ;
}

int         main(int ac, char **av)
{
    char    buf[42];

    pp(buf);
    puts(buf);
    return (0);    
}
