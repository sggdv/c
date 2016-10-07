#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  time_t timep;
  struct tm *p;

  time(&timep);
  p = localtime(&timep);

  printf("%d-%d-%d\n", (1900 + p->tm_year), (1 + p->tm_mon), p->tm_mday);
  return 0;
}
