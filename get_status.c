#include <stdlib.h>
#include "rb_rpg.h"
#include "rb.h"

void		get_status(t_character *c)
{
  rb_putstr("Je suis ");
  rb_putstr(c->name);
  if (c->classe == MAGE)
    rb_putstr(" un mage de niveau ");
  else if (c->classe == WARRIOR)
    rb_putstr(" un guerrier de niveau ");
  rb_putstr(rb_int_to_string(c->niveau));
  rb_putstr(". J'ai actuellement ");
  rb_putstr(rb_int_to_string(c->pv));
  rb_putstr(" pv, je fais ");
  rb_putstr(rb_int_to_string(c->degats));
  rb_putstr(" dmg et j'ai ");
  rb_putstr(rb_int_to_string(c->defense));
  rb_putstr(" defense.\n");
}
