/*
** my_command.c for  in /home/kirito/etna/ftl/yousse_s
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Wed Nov  9 12:36:38 2016 YOUSSEF seif-eddine
** Last update Fri Nov 11 10:54:23 2016 YOUSSEF seif-eddine
*/
#include "ftl.h"

int					attack_enemy_basic(t_ship *ship)
{
  if (ship->ennemy->life <= 0)
    {
      my_putstr_color("green", "L'enemi à été neutralisé, bien joué !\n");
      ship->ennemy->bool = 0;
    }
  else
    {
      ship->hull -= ship->ennemy->damage;
      critical_choice(ship);
      my_putstr("l'attaque ennemi nous a touché\n");
    }
  if (ship->hull <= 0)
    {
      ship->ennemy->bool = 3;
      my_putstr_color("red", "Votre vaisseau est détruit...\n");
      my_putmsg_r("GAME OVER\n");
    }
  return (1);
}

int					stat_enemy_basic(t_ship *ship)
{
  my_putstr_color("blue", "[ENNEMY DEBUG] :\n");
  my_putstr_color("magenta", " | life : ");
  my_put_nbr(ship->ennemy->life);
  my_putstr("\n");
  my_putstr_color("magenta", " | damage : ");
  my_put_nbr(ship->ennemy->damage);
  my_putstr("\n");
  return (1);
}

int					init_debug_enemy(t_ship *ship)
{
  t_ennemy				*enemy;

  if ((enemy = malloc(sizeof(t_ennemy))) == NULL)
    return (0);
  enemy->life = 25;
  enemy->damage = 3;
  enemy->detect = 1;
  enemy->bool = 0;
  ship->ennemy = enemy;
  return (1);
}

int					debug_enemy(t_ship *ship)
{
  stat_enemy_basic(ship);
  ship->ennemy->bool = 1;
  return (1);
}

int					test(t_ship *ship)
{
  if (ship->ennemy->bool == 1)
    attack_enemy_basic(ship);
  return (1);
}
