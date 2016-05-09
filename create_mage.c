#include "rb_rpg.h"

t_character	*create_mage(t_character *c)
{
  c->niveau = 1;
  c->pv = 100;
  c->energie = 200;
  c->defense = 3;
  c->degats = 40;
  c->critique = 10;
  c->vitesse = 4;
  c->classe = MAGE;
  return (c);
}
