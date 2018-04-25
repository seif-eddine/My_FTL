/*
** system_critical.c for  in /home/kirito/etna/ftl/yousse_s
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Thu Nov 10 14:03:10 2016 YOUSSEF seif-eddine
** Last update Fri Nov 11 14:38:54 2016 YOUSSEF seif-eddine
*/
#include			"ftl.h"

int				critical_weapon(t_ship *ship)
{
  char				*str;

  str = "offline";
  if ((my_strcmp(ship->weapon->system_state, "offline")) == 0)
    {
      my_putstr_color("red", "[CRITICAL HIT] : ");
      my_putstr_color("red", "Help : Veuillez reparer votre arme  !!\n");
      return (1);
    }
  ship->weapon->system_state = my_strdup(str);
  my_putstr_color("red", "[CRITICAL HIT] : Votre arme à été touché !!\n");
  return (1);
}

int				critical_ftl(t_ship *ship)
{
  char				*str;

  str = "offline";
  if ((my_strcmp(ship->drive->system_state, "offline")) == 0)
    {
      my_putstr_color("red", "[CRITICAL HIT] : ");
      my_putstr_color("red", "Help : Veuillez reparer votre reacteur !!\n");
      return (1);
    }
  ship->drive->system_state = my_strdup(str);
  my_putstr_color("red", "[CRITICAL HIT] : ");
  my_putstr_color("red", "Votre réacteur à été touché !!!\n");
  return (1);
}

int				critical_tools(t_ship *ship)
{
  char				*str;

  str = "offline";
  if ((my_strcmp(ship->tools->system_state, "offline")) == 0)
    {
      my_putstr_color("red", "[CRITICAL HIT] : ");
      my_putstr_color("red", "Help : Veuillez reparer votre systeme !!\n");
      return (1);
    }
  ship->tools->system_state = my_strdup(str);
  my_putstr_color("red", "[CRITICAL HIT] : ");
  my_putstr_color("red", "Votre system de navigation à été touché !!\n");
  return (1);
}

int				critical_choice(t_ship *ship)
{
  int				i;

  i = rand() % 25 + 1;
  if (i == 3)
    critical_weapon(ship);
  else if (i == 9)
    critical_ftl(ship);
  else if (i == 20)
    critical_tools(ship);
  else
    return (1);
  return (1);
}
