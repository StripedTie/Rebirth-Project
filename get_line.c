#include <stdlib.h>
#include "rb.h"


char		*my_rea_cat(char *str, char buf)
{
  int		i;
  char		*res;
  
  res = rb_malloc(sizeof(char) * (my_strlen(str)) + 2);
  i = 0;
  if (str != NULL)
    while (str[i])
      res[i] = str[i++];
  if (buf != '\n' && buf != '\0')
    {
      res[i] = buf;
      i++;
    }
  res[i] = 0;
  if (str != NULL)
    rb_free(str);
  return (res);
}

char		*get_line(int fd)
{
  char		*str;
  static int	i = 0;
  char		buf;
  
  str = NULL;
  i++;
  while (42)
    {
      if ((read(fd, &buf, 1)) <= 0)
	return (str);
      if (buf == '\0' || buf == '\n')
	{
	  str = my_rea_cat(str, buf);
	  return (str);
	}
      str = my_rea_cat(str, buf);
    }
}
