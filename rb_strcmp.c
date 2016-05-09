#include <stdlib.h>
#include "rb.h"


int	rb_strcmp(char *str1, char *str2)
{
  int	i;

  i = 0;
  if (str1 == NULL || str2 == NULL)
    rb_xerror("rb_strcmp : String pointer is NULL");
  while ((str1[i] == str2[i]) && (str1[i] != '\0') && (str2[i] != '\0'))
    i = i + 1;
  return (str1[i]-str2[i]);
}
