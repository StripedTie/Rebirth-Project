#include "rb_rpg.h"

t_character	*create_hunter(t_character *c)
{
  c->niveau = 1;
  c->pv = 120;
  c->energie = 50;
  c->defense = 4;
  c->degats = 15;
  c->critique = 10;
  c->vitesse = 3;
  c->classe = HUNTER;
  return (c);
}
