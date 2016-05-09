#include <stdlib.h>
#include "rb.h"

char	**rb_get_system_paths(char **env)
{
  return (rb_str_to_wordtab(rb_get_var_from_env(env, "PATH"), ':'));
}
