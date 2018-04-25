/*
** freezer.c for  in /home/kirito/etna/ftl/yousse_s/test/final/yousse_s/bonus/source
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Fri Nov 11 09:09:25 2016 YOUSSEF seif-eddine
** Last update Fri Nov 11 18:10:55 2016 YOUSSEF seif-eddine
*/

#include "ftl.h"

int					init_freeza(t_ship *ship)
{
  t_freeza				*freeza;
  char					*str;

  str = "Gold\n";
  if ((freeza = malloc(sizeof(t_freeza))) == NULL)
    {
      my_putmsg_y("votre vaisseau a explose quand vous avez tente ");
      my_putmsg_y("d'ajouter les freezer au jeu\n");
      return (0);
    }
  freeza->damage = 150000;
  freeza->unite = 12000000;
  freeza->bdlm = 150000;
  freeza->life = 100000;
  freeza->str = my_strdup(str);
  ship->freeza = freeza;
  return (1);
}

int					stat_freeza(t_ship *ship)
{
  my_putstr_color("red", "[BOSS] FREEZER : ");
  my_putstr(ship->freeza->str);
  my_putstr_color("red", " | life : ");
  my_put_nbr(ship->freeza->life);
  my_putstr("\n");
  my_putstr_color("red", " | damage : ");
  my_put_nbr(ship->freeza->damage);
  my_putstr("\n");
  my_putstr_color("red", " | Attack Spe: ");
  my_put_nbr(ship->freeza->bdlm);
  my_putstr("\n");
  my_putstr_color("red", " | Unité: ");
  my_put_nbr(ship->freeza->unite);
  my_putstr("\n");
  return (1);
}

int					msg_f(int i)
{
  if (i == 1)
    {
      my_putstr_color("red", "Un ennemie est apparue ... FREEZER\n");
      my_putstr_color("red", "Freezer : Encore un vaisseau ?\n");
      my_putstr_color("red", "Freezer : Allez on vas jouer !\n");
    }
  else if (i == 2)
    {
      my_putstr_color("red", "Vous avez perdu : 10 pdv\n");
      my_putstr_color("red", "Freezer : On ce reverra bientot, OHohhoh.\n");
    }
  else if (i == 3)
    {
      my_putstr_color("red", "[Freezer] : AhaahAHHHHahhahhhah\n");
      my_putstr_color("red", "[Freezer] : Pauvre mortel *rire*\n");
      my_putstr_color("red", "[Freezer] : Adieu. *rire*\n");
    }
  return (1);
}

int					freeza(t_ship *ship)
{
  init_freeza(ship);
  stat_freeza(ship);
  return (1);
}

int					run_freeza(t_ship *ship)
{
  int					i;

  i = rand() % 20 + 1;
  if (ship->tools->sector != 1)
    {
      if ((i == 10) || (i == 20) || (i == 15))
	{
	  run_sdl();
	  msg_f(1);
	  ship->hull -= 10;
	  msg_f(2);
	  if (ship->hull >= 10 && ship->hull <= 25)
	    my_putstr_color("red", "Freezer : Ohohoohoh, arrete de gigoter !\n");
	}
      else if (i == 1)
	{
	  run_sdl1();
	  msg_f(3);
	  freeza(ship);
	  my_putstr_color("red", "[CRITICAL HIT] : Freezer lance Boule de la mort\n");
	  my_putstr_color("red", "Freezer : Ohohohoh :3\n");
	  ship->ennemy->bool = 3;
	}
    }
  return (1);
}
