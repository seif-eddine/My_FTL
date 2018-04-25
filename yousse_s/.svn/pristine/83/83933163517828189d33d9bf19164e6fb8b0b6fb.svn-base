/*
** detect.c for  in /home/kirito/etna/ftl/yousse_s
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Thu Nov 10 10:23:02 2016 YOUSSEF seif-eddine
** Last update Thu Nov 10 14:39:32 2016 YOUSSEF seif-eddine
*/
#include		"ftl.h"

int			detect(t_ship *ship)
{
  if ((my_strcmp(ship->tools->system_state, "offline")) == 0)
    return (1);
  ship->rand = rand() % 4 + 1;
  if (ship->rand == 1)
    ship->str = my_strdup("attackbonus");
  else if (ship->rand == 2)
    ship->str = my_strdup("evadebonus");
  else if (ship->rand == 3)
    ship->str = my_strdup("energy");
  else if (ship->rand == 4)
    ship->str = my_strdup("scrap");
  else
    my_putstr_color("red", "Problem detected in command : detect\n");
  my_putstr_color("yellow", "Bonus : ");
  my_putstr_color("yellow", ship->str);
  my_putstr("\n");
  return (1);

}
