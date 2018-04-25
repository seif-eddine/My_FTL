/*
** r_detect.c for  in /home/kirito/etna/ftl/yousse_s
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Thu Nov 10 15:31:10 2016 YOUSSEF seif-eddine
** Last update Thu Nov 10 15:37:01 2016 YOUSSEF seif-eddine
*/
#include			"ftl.h"

int				r_incre_color(t_ship *ship)
{
  ship->i = 0;
  ship->detect = 1;
  my_putstr_color("green", "Cargaisons de fret Ajoutées\n");
  return (1);
}

int				navi_system()
{
  my_putstr_color("red", "[NAVIGATION SYSTEM] : ");
  my_putstr_color("red", "detection deja effectué dans ce secteur\n");
  return (1);
}
