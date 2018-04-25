/*
** sector.c for  in /home/kirito/etna/ftl/yousse_s
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Thu Nov 10 09:36:37 2016 YOUSSEF seif-eddine
** Last update Fri Nov 11 10:43:39 2016 YOUSSEF seif-eddine
*/
#include "ftl.h"

int				sector(t_ship *ship)
{
  ship->tools->sector += 1;
  my_putstr("\n");
  if (ship->tools->sector <= 9)
    {
      my_putstr_color("green", "Vous avez changé de secteur\n");
      my_putstr_color("red", "Les enemies deviennent de plus en plus fort\n");
      ship->ennemy->damage += 2 * ship->tools->sector;
      ship->ennemy->life += 5 * ship->tools->sector;
    }
  if (ship->tools->sector == 10)
    {
      my_putmsg_g("Vous avez gagné bravo.\nMaintenant l'espaces est sur !\n");
      ship->ennemy->bool = 3;
    }
  return (1);
}

int				quit(t_ship *ship)
{
  my_putstr_color("red", "A bientot pour une nouvelle aventure ");
  my_putstr_color("red", "dans l'espace !\n");
  ship->ennemy->bool = 3;
  return (1);
}
