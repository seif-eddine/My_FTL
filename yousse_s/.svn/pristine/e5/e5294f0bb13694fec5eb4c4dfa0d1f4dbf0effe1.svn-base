/*
** game.c for  in /home/kirito/etna/ftl/yousse_s
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Wed Nov  9 09:16:09 2016 YOUSSEF seif-eddine
** Last update Fri Nov 11 17:04:27 2016 YOUSSEF seif-eddine
*/

#include				"ftl.h"

static const t_game			tab[] =
  {
    {&help, "help"},
    {&call_systemrepair, "systemrepair"},
    {&call_getbonus, "getbonus"},
    {&call_control, "controlsystem"},
    {&stat, "stat"},
    {&call_jump, "jump"},
    {&call_attack, "attack"},
    {&call_detect, "detect"},
    {&quit, "quit"},
    {NULL, NULL}
  };

int					call_getbonus(t_ship *ship)
{
  get_bonus(ship);
  return (1);
}

int					call_systemrepair(t_ship *ship)
{
  system_repair(ship);
  return (1);
}

int					help()
{
  my_putstr_color("yellow", "Commandes system disponible :\n");
  my_putstr("attack\n");
  my_putstr("detect\n");
  my_putstr("jump\n");
  my_putstr("getbonus\n");
  my_putstr("controlsystem\n");
  my_putstr("systemrepair\n");
  my_putstr("stat\n");
  my_putstr("help\n");
  return (1);
}

int					stat(t_ship *ship)
{
  my_putstr_color("yellow", "space_ship statement:\n");
  my_putstr_color("magenta", " | hull : ");
  my_put_nbr(ship->hull);
  my_putstr("\n");
  my_putstr_color("magenta", " | damage : ");
  my_put_nbr(ship->weapon->damage);
  my_putstr("\n");
  my_putstr_color("magenta", " | energy : ");
  my_put_nbr(ship->drive->energy);
  my_putstr("\n");
  my_putstr_color("magenta", " | sector : ");
  my_put_nbr(ship->tools->sector);
  my_putstr("\n");
  my_putstr_color("magenta", " | evade : ");
  my_put_nbr(ship->tools->evade);
  my_putstr("\n");
  return (1);
}

int					prompt(t_ship *ship)
{
  int					i;
  char					*choice;

  i = 0;
  my_putstr_color("yellow", "waiting_for_orders> ");
  if ((choice = readline()) != NULL)
    {
      while (tab[i].str != NULL)
	{
	  if (my_strcmp(tab[i].str, choice) == 0)
	    {
	      if (tab[i].pf(ship) == 0)
		return (0);
	      return (1);
	    }
	  i++;
	}
      my_putmsg_r("[SYSTEM FAILURE] : commande inconnue\n");
      free(choice);
      return (prompt(ship));
    }
  free(choice);
  return (1);
}
