#include <stdio.h>
#include <time.h>

char c[80];

struct s {
 int  n;
 char *buf;
}

void m(void)
{
  time_t t;
	
  t = time((time_t *)0);
  printf("%s - %d", c, t);
}

int main(undefined4 param_1,int param_2)
{
  struct s *s1, s2;
  FILE *stream;
  
  s1 = (s *)malloc(8);
  s1->n = 1;
  s1->buf = (char *)malloc(8);

  s2 = (s *)malloc(8);
  s2->n = 2
  s2->buf = (char *)malloc(8);

  strcpy(s1->buf, av[1]);
  strcpy(s2->buf, av[2]);

  stream = fopen("/home/user/level8/.pass","r");
  fgets(c, 68, stream);
  puts("~~");
  return (0);
}
