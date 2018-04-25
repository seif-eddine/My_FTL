/*
** ja.c for  in /home/kirito/etna/ftl/yousse_s
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Thu Nov 10 14:59:25 2016 YOUSSEF seif-eddine
** Last update Thu Nov 10 15:53:15 2016 YOUSSEF seif-eddine
*/
#include			"ftl.h"

int				r_attack(t_ship *ship)
{
  my_put_nbr(ship->weapon->damage);
  my_putstr_color("green", " pdv\n");
  return (1);
}

int				zero_enemy(t_ship *ship)
{
  my_putstr_color("yellow", "Chargement de la puissance pour le saut PRL\n");
  my_putstr_color("green", "JUMP\n");
  my_putstr_color("green", "[SYSTEM DETECT] : ");
  my_putstr_color("red", "aucun ennemi présent dans la zone\n");
  ship->drive->energy -= 1;
  ship->detect = 0;
  sector(ship);
  return (1);
}

int				maybe_enemy(t_ship *ship)
{
  ship->detect = 0;
  my_putstr_color("yellow", "Chargement de la puissance pour le saut PRL\n");
  my_putstr_color("green", "JUMP\n");
  my_putstr_color("green", "[SYSTEM DETECT] : L'espace est trop sur...\n");
  ship->drive->energy -= 1;
  sector(ship);
  return (1);
}

int				sure_enemy(t_ship *ship)
{
  ship->jump = 1;
  ship->detect = 0;
  my_putstr_color("yellow", "Chargement de la puissance pour le saut PRL\n");
  my_putstr_color("green", "JUMP\n");
  my_putstr_color("red", "[SYSTEM DETECT] : ");
  my_putstr_color("red", "nouvel ennemi detecté, il nous attaque !\n");
  init_debug_enemy(ship);
  sector(ship);
  ship->drive->energy -= 1;
  debug_enemy(ship);
  return (1);
}

int				cargaison()
{
  my_putstr_color("yellow", "[DETECTION SYSTEM] :");
  my_putstr_color("yellow", "cargaison de fret detecté ");
  my_putstr_color("yellow", "dans cet espace\n");
  my_putstr_color("yellow", "Ajout des cargaisons de fret en cours...\n");
  return (1);
}
