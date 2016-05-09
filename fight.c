#include <stdlib.h>
#include <stdio.h>
#include "rb.h"
#include "rb_rpg.h"

void		attack_of_c1(t_character *c1, t_character *c2)
{
  int		deg;

  rb_putstr(c1->name);
  rb_putstr(" attaque ");
  rb_putstr(c2->name);
  rb_putstr(" et lui inflige ");
  rb_putstr(rb_int_to_string(deg = (c1->degats) - (c2->defense)));
  rb_putstr(" degats. Il reste ");
  rb_putstr(rb_int_to_string(c2->pv = c2->pv - deg));
  rb_putstr(" pv a ");
  rb_putstr(c2->name);
  my_putchar('\n');
}

void		attack_of_c2(t_character *c1, t_character *c2)
{
  int		deg;

  rb_putstr(c2->name);
  rb_putstr(" attaque ");
  rb_putstr(c1->name);
  rb_putstr(" et lui inflige ");
  rb_putstr(rb_int_to_string(deg = (c2->degats) - (c1->defense)));
  rb_putstr(" degats. Il reste ");
  rb_putstr(rb_int_to_string(c1->pv = c1->pv - deg));
  rb_putstr(" pv a ");
  rb_putstr(c1->name);
  my_putchar('\n');
}

void		who_won_the_fight(t_character *c1, t_character *c2)
{
  if (c1->pv <= 0 && c2->pv <= 0)
    rb_putstr("Egalite");
  else if (c1->pv <= 0 && c2->pv > 0)
    {
      rb_putstr(c2->name);
      rb_putstr(" a triomphe de ");
      rb_putstr(c1->name);
    }
    else if (c2->pv <= 0 && c1->pv > 0)
    {
      rb_putstr(c1->name);
      rb_putstr(" a triomphe de ");
      rb_putstr(c2->name);
    }
}
void		fight(t_character *c1, t_character *c2)
{
  int		vit1;
  int		vit2;

  vit1 = 0;
  vit2 = 0;
  while (c1->pv > 0 && c2->pv > 0)
    {
      if (vit1 == c1->vitesse)
	{
	  attack_of_c1(c1, c2);
	  vit1 = 0;
	}
      if (vit2 == c2->vitesse)
	{
	  attack_of_c2(c1, c2);
	  vit2 = 0;
	}
      vit1 = vit1 + 1;
      vit2 = vit2 + 1;
    }
  who_won_the_fight(c1, c2);
  my_putchar('\n');
}
