#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int     main(int argc, char **argv)
{
    int ret;
    
    ret = atoi(argv[1]);
    if (ret == 423)
    {
        char *binsh = strdup("/bin/sh");
        gid_t gid = getegid();
        uid_t uid = geteuid();
        //setresgid(gid, gid, gid);
        //setresuid(uid, uid, uid);
        char *arg[2] = {"/bin/sh", NULL};
        execv(binsh, arg);
    }
    else
       fwrite("No !\n", 1, 5, stderr); 
    return (0);
}
