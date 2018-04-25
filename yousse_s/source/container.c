/*
** container.c for  in /home/kirito/etna/ftl/yousse_s
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Mon Nov  7 11:40:32 2016 YOUSSEF seif-eddine
** Last update Thu Nov 10 17:09:54 2016 YOUSSEF seif-eddine
*/
#include		"ftl.h"

int			add_container_to_ship(t_ship *ship)
{
  t_container		*container;
  my_putmsg_r("ajout du container en cours...\n");
  if ((container = malloc(sizeof(t_container))) == NULL)
    {
      my_putmsg_y("votre vaisseau a explose lorsque vous ");
      my_putmsg_y("avez pose le container\n");
      return (0);
    }
  container->first = NULL;
  container->last = NULL;
  container->nb_elem = 0;
  ship->container = container;
  my_putmsg_g("le container a ete ajoute avec succes!\n");
  my_putstr("\n");
  return (1);
}

void			add_freight_to_container(t_ship *ship, t_freight *freight)
{
  if (ship->container->first == NULL)
    {
      ship->container->last = freight;
      ship->container->first = freight;
      freight->next = NULL;
      freight->prev = NULL;
      ship->container->nb_elem += 1;
    }
  else
    {
      ship->container->last->next = freight;
      freight->prev = ship->container->last;
      freight->next = NULL;
      ship->container->last = freight;
      ship->container->nb_elem += 1;
    }
}

void			del_freight_from_container(t_ship *ship, t_freight *freight)
{
  t_freight		*tmp;

  if (ship->container->first == freight)
    ship->container->first = freight->next;
  else if (ship->container->last == freight)
    ship->container->last = freight->prev;
  else
    {
      tmp = ship->container->first;
      while (tmp != NULL)
{
	  if (tmp == freight)
	    {
	      tmp->prev->next = tmp->next;
	      tmp->next->prev = tmp->prev;
	      ship->container->nb_elem -= 1;
	    }
	  tmp = tmp->next;
	}
    }
  free(freight);
}

void			get_bonus(t_ship *ship)
{
  t_freight     *freight;

  my_putstr_color("yellow", "Recuperation des materiaux utiles en cours...\n");
  freight = ship->container->first;
  while (freight != NULL)
    {
      if (my_strcmp(freight->item, "attackbonus") == 0)
	ship->weapon->damage += 5;
      else if (my_strcmp(freight->item, "evadebonus") == 0)
	ship->tools->evade += 3;
      else if (my_strcmp(freight->item, "energy") == 0)
	ship->drive->energy += 1;
      if (my_strcmp(freight->item, "scrap") != 0)
	del_freight_from_container(ship, freight);
      freight = freight->next;
    }
  my_putstr_color("green", "Materiaux utiles recuperes\n");
}
