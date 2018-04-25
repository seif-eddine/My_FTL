/*
** attack.c for  in /home/kirito/etna/ftl/yousse_s
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Wed Nov  9 16:41:09 2016 YOUSSEF seif-eddine
** Last update Fri Nov 11 15:49:13 2016 YOUSSEF seif-eddine
*/
#include "ftl.h"
#include <time.h>

int			call_attack(t_ship *ship)
{
  if ((my_strcmp(ship->weapon->system_state, "offline")) == 0)
    return (1);
  if (ship->jump == 1)
    {
      ship->ennemy->life -= ship->weapon->damage;
      my_putstr_color("green", "L'ennemie a perdu ");
      if (ship->weapon->damage > ship->ennemy->life)
	r_attack(ship);
      else
	{
	  my_put_nbr(ship->weapon->damage);
	  my_putstr_color("green", " pdv\n");
	}
      if (ship->ennemy->life <= 0)
	{
	  ship->ennemy->life = 0;
	  stat_enemy_basic(ship);
	  ship->jump = 0;
	}
      else
	stat_enemy_basic(ship);
    }
  else
    my_putstr_color("red", "[SYSTEM FAILURE] : pas d'ennemis à proximité\n");
  return (1);
}

int			call_jump(t_ship *ship)
{
  ship->ennemy->detect = (rand()% 3) + 1;
  if ((my_strcmp(ship->drive->system_state, "offline")) == 0)
    return (1);
  if (ship->drive->energy <= 0)
    my_putstr_color("red", "Vous n'avez plus d'energie !!\n");
  else
    {
      if (ship->jump == 0)
	{
	  if (ship->ennemy->detect == 1)
	    zero_enemy(ship);
	  else if (ship->ennemy->detect == 2)
	    maybe_enemy(ship);
	  else if (ship->ennemy->detect == 3)
	    sure_enemy(ship);
	}
      else
	{
	  my_putstr_color("red", "[SYSTEM FAILURE] : vous ne pouvez pas quitter ");
	  my_putstr_color("red", "le secteur tant qu'un ennemi est présent\n");
	}
    }
  return (1);
}

int					call_control(t_ship *ship)
{
  system_control(ship);
  return (1);
}

t_freight				*freight_t(t_ship *ship)
{
  t_freight				*freight;

  if ((freight = malloc(sizeof(t_freight))) == NULL)
    return (0);
  freight->item = my_strdup(ship->str);
  if ((my_strcmp(ship->str, "energy")) == 0)
    add_freight_to_container(ship, freight);
  else if ((my_strcmp(ship->str, "attackbonus")) == 0)
    add_freight_to_container(ship, freight);
  else if ((my_strcmp(ship->str, "scrap")) == 0)
    add_freight_to_container(ship, freight);
  else if ((my_strcmp(ship->str, "evadebonus")) == 0)
    add_freight_to_container(ship, freight);
  else
    my_putstr_color("red", "An error detected in freight\n");
  return (freight);
}

int					call_detect(t_ship *ship)
{
  t_freight				*freight;

  if ((freight = malloc(sizeof(t_freight))) == NULL)
    return (0);
  if (ship->detect == 0 &&
      (my_strcmp(ship->tools->system_state, "online") == 0))
    {
      cargaison();
      while (ship->i != 10)
	{
	  detect(ship);
	  freight_t(ship);
	  ship->i++;
	}
      r_incre_color(ship);
    }
  else
    navi_system();
  return (1);
}
