#include <stdlib.h>
#include "rb.h"

char	*rb_strcpy(char *dest, char *scr)
{
  int	idx;

  idx = 0;
  if (dest == NULL)
    rb_xerror("rb_strcpy : dest is a NULL pointer");
  if (scr == NULL)
    rb_xerror("rb_strcpy : scr is a NULL pointer");
  while (scr[idx] != '\0')
    {    
      dest[idx] = scr[idx];
      idx = idx + 1;
    }
  dest[idx] = '\0';
  return (dest);
}
