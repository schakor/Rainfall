#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char buf[40];
    int ret_atoi;

    ret_atoi = atoi(argv[1]);
    if (ret_atoi > 9) {
        return (1);
    }
    ret_atoi *= 4;
    memcpy(buf, argv[2], ret_atoi);
    if (ret_atoi == 0x574f4c46) {
        execl("/bin/sh", "sh", NULL);
    }
    return 0;
}
