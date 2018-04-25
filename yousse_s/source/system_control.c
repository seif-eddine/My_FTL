/*
** system_control.c for  in /home/kirito/etna/ftl/yousse_s
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Tue Nov  8 19:01:44 2016 YOUSSEF seif-eddine
** Last update Fri Nov 11 09:08:05 2016 YOUSSEF seif-eddine
*/
#include "ftl.h"

void			ftl_drive_system_check(t_ship *ship)
{
  my_putmsg_r("verification du reacteur en cours...\n");
  if (my_strcmp(ship->drive->system_state, "online") == 0)
    my_putmsg_g("reacteur OK!\n");
  else
    my_putmsg_y("reacteur hors service!\n");
}

void			navigation_tools_system_check(t_ship *ship)
{
  my_putmsg_r("verification du systeme de navigation en cours...\n");
  if (my_strcmp(ship->tools->system_state, "online") == 0)
    my_putmsg_g("systeme de navigation OK!\n");
  else
    my_putmsg_y("system de navigation hors service!\n");
}

void			weapon_system_check(t_ship *ship)
{
  my_putmsg_r("verification du systeme d'armement en cours...\n");
  if (my_strcmp(ship->weapon->system_state, "online") == 0)
    my_putmsg_g("systeme d'armement OK!\n");
  else
    my_putmsg_y("systeme d'armement hors service!\n");
}

void			system_control(t_ship *ship)
{
  ftl_drive_system_check(ship);
  navigation_tools_system_check(ship);
  weapon_system_check(ship);
}
