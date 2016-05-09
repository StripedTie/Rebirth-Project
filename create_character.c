#include <stdlib.h>
#include "rb.h"
#include "rb_rpg.h"

t_character	*create_character(char *name, t_classe classe)
{
  t_character	*character;
  if (name == NULL)
    return (NULL);
  character = rb_malloc(sizeof(*character));
  character->name = rb_strdup(name);
  character->classe = classe;
  if (classe == MAGE)
    character = create_mage(character);
  else if (classe == WARRIOR)
    character = create_warrior(character);
  else if (classe == HUNTER)
    character = create_hunter(character);
  else if (classe == ROGUE)
    character = create_rogue(character);
  return (character);
}
