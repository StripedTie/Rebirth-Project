#ifndef RB_RPG_H_
# define RB_RPG_H_

typedef enum		e_classe
  {
    WARRIOR,
    MAGE,
    HUNTER,
    ROGUE
  }			t_classe;

typedef struct		s_character
{
  char			*name;
  int			niveau;
  int			pv;
  int			energie;
  int			defense;
  int			degats;
  int			critique;
  int			vitesse;
  t_classe		classe;
}			t_character;

t_character		*create_character(char *name, t_classe classe);
t_character		*create_mage(t_character *c);
t_character		*create_warrior(t_character *c);
void			get_status(t_character *c);
void			fight(t_character *c1, t_character *c2);
void			attack_of_c1(t_character *c1, t_character *c2);
void			attack_of_c2(t_character *c1, t_character *c2);
void			who_won_the_fight(t_character *c1, t_character *c2);
t_character		*create_hunter(t_character *c);
t_character		*create_rogue(t_character *c);

#endif /* !RB_RPG_H_ */
