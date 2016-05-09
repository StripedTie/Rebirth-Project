#include "rb_rpg.h"

t_character	*create_rogue(t_character *c)
{
  c->niveau = 1;
  c->pv = 100;
  c->energie = 50;
  c->defense = 3;
  c->degats = 25;
  c->critique = 10;
  c->vitesse = 2;
  c->classe = ROGUE;
  return (c);
}
