#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *auth = NULL;
char *service = NULL;

int	main(int argc, char **argv)
{
  char buf[128];
  
  while (1)
  {
    printf("%p, %p \n", auth, service);
    
    if (fgets(buf, 128, stdin) == 0) 
        return (0);

    if (strncmp(buf, "auth ", 5) == 0)
    {
        auth = (char *)malloc(4);
        auth[0] = '\0';
        if (strlen(buf + 5) <= 30)
            strcpy(auth, buf + 5);     
    }

    if (strncmp(buf, "reset", 5) == 0)
        free(auth);

    if (strncmp(buf, "service", 6) == 0)
        service = strdup(buf + 7);

    if (strncmp(buf, "login", 5) == 0)
    {
        if (auth[32] != 0)
            system("/bin/sh");
        else
            fwrite("Password:\n", 10, 1, stdout);
    }
  }
  return (0);
}
