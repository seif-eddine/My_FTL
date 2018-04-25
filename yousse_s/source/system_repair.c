/*
** system_repair.c for  in /home/kirito/etna/ftl/yousse_s
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Tue Nov  8 19:20:26 2016 YOUSSEF seif-eddine
** Last update Thu Nov 10 15:43:33 2016 YOUSSEF seif-eddine
*/
#include "ftl.h"

static	const  t_repair_command		tab[] =
  {
    {&ftl_drive_system_repair, "ftl_drive"},
    {&navigation_tools_system_repair, "navigation_tools"},
    {&weapon_system_repair, "weapon"},
    {NULL, NULL}
  };

int					ftl_drive_system_repair(t_ship *ship)
{
  char					*str;

  str = "online";
  my_putmsg_r("reparation du reacteur en cours...\n");
  free(ship->drive->system_state);
  ship->drive->system_state = my_strdup(str);
  if (ship->drive->system_state == NULL)
    {
      my_putmsg_y("les reparations du reacteur ont echoue\n");
      return (0);
    }
  else
    my_putmsg_g("reparation termine! systeme reacteur OK!\n");
  return (0);
}

int			navigation_tools_system_repair(t_ship *ship)
{
  char			*str;
  str = "online";
  my_putmsg_r("reparation du systeme de navigation en cours...\n");
  free(ship->tools->system_state);
  ship->tools->system_state = my_strdup(str);
  if (ship->tools->system_state == NULL)
    {
      my_putmsg_y("les reparations des outils de navigations ont echoue\n");
      return (0);
    }
  else
    my_putmsg_g("reparation termine! systeme de navigation OK!\n");
  return (1);
}

int			weapon_system_repair(t_ship *ship)
{
  char			*str;

  str = "online";
  my_putmsg_r("reparation du systeme d'armement en cour...\n");
  free(ship->weapon->system_state);
  ship->weapon->system_state = my_strdup(str);
  if (ship->weapon->system_state == NULL)
    {
      my_putmsg_y("les reparations du systeme d'armement ont echoue\n");
      return (0);
    }
  else
    my_putmsg_g("reparation termine! systeme d'armement OK!\n");
  return (1);
}

int			system_repair(t_ship *ship)
{
  int			i;
  char			*choice;

  i = 0;
  my_putmsg_b("repair_system~>");
  if ((choice = readline()) != NULL)
    {
      while (tab[i].str != NULL)
	{
	  if (my_strcmp(tab[i].str, choice) == 0)
	    {
	      if (tab[i].repair(ship) == 1)
		return (0);
	      return (0);
	    }
	  i++;
	}
      my_putmsg_r("[SYSTEM FAILURE] : commande inconnue\n");
      free(choice);
      return (system_repair(ship));
    }
  free(choice);
  return (1);
}
