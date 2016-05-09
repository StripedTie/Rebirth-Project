#include <stdlib.h>
#include "rb.h"

char	*rb_strstr(char *str, char *to_find)
{
  int	i;

  i = 0;
  if (str == NULL || to_find == NULL)
    rb_xerror("rb_strstr : String pointer is NULL");
  if (str[0] != '\0')
    {
      while (to_find[i] != '\0')
	{
	  if (to_find[i] != str[i])
	    return (rb_strstr(str + 1, to_find));
	  i = i + 1;
	}
      return (str);
    }
  else
    return(NULL);
}
