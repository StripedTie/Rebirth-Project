#include <unistd.h>
#include "rb.h"

char	read_next_char(int fd)
{
  char	buf;

  if (read(fd, &buf, 1) <= 0)
    return ('\0');
  return (buf);
}
