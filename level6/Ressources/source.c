#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void n(void)

{
  system("/bin/cat /home/user/level7/.pass");
  return;
}

void m(void)
{
  puts("Nope");
  return;
}

int  main(int argc,char **argv)
{
  char *buf;
  void (*fun)(void);
  
  buf = (char *)malloc(0x40);
  fun = malloc(4);

  fun = m;
  strcpy(buf, argv[1]);

  fun();
  return (0);
}
