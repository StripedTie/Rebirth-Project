#include "rb_rpg.h"

t_character     *create_warrior(t_character *c)
{
  c->niveau = 1;
  c->pv = 200;
  c->energie = 50;
  c->defense = 8;
  c->degats = 10;
  c->critique = 10;
  c->vitesse = 3;
  c->classe = WARRIOR;
  return (c);
}
