#include <stdlib.h>
#include "rb.h"

int	rb_strncmp(char *str1, char *str2, int n)
{
  int	i; 
  
  i = 0;
  if ((str1 == NULL) || (str2 == NULL))
    rb_xerror("rb_strncmp : String pointer is NULL");
  if (n < 1)
    rb_xerror("rb_strncmp : The integer is less than 1");
  while ((n >= 1) && (str1[i] != '\0') && (str2[i] != '\0')) 
    {
      if (str1[i] != str2[i])
	return (str1[i] - str2[i]);
      i = i + 1;
      n = n - 1;
    }
  return (str1[i] - str2[i]);
}
