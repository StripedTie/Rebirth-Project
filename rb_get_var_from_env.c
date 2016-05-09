#include <stdlib.h>
#include "rb.h"

int	find_my_var_env(char **env, char *varname)
{
  int	lin;
  int	col;

  lin = 0;
  col = 0;
  if (varname == NULL)
    rb_xerror("rb_get_var_from_env : String pointer of variable name is NULL");
  while (env[lin] != NULL)
    {
      while (env[lin][col] == varname[col])
	{
	  if (col == my_strlen(varname) - 1)
	    return (lin);
	  col = col + 1;
	}
      col = 0;
      lin = lin + 1;
    }
  return (-1);
}

char	*rb_get_var_from_env(char **env, char *varname)
{
  int	lin;

  if ((lin = find_my_var_env(env, varname)) == -1)
    rb_xerror("Sorry sir, i don't find your variable *varname");
  return (env[lin] + (my_strlen(varname) + 1));
}
