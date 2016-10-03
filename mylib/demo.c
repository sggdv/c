#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char const *argv[]) {
  int fd, n;
  char buf[BUFSIZ];

  fd = open("main.c", O_RDONLY, 0);

  while ((n = read(fd, buf, BUFSIZ)) > 0)
    write(1, buf, n);
  return 0;
}
