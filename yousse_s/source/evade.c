/*
** evade.c for  in /home/kirito/etna/ftl/yousse_s/test/final/yousse_s/bonus/source
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Fri Nov 11 15:52:46 2016 YOUSSEF seif-eddine
** Last update Fri Nov 11 16:59:16 2016 YOUSSEF seif-eddine
*/

#include			"ftl.h"

int				r_evade(t_ship *ship, int i)
{
  if (ship->tools->evade >= 25 && ship->tools->evade <= 45)
    test(ship);
  else if (ship->tools->evade >= 46 && ship->tools->evade <= 75)
    {
      if (i >= 1 && i <= 12)
	test(ship);
      else
	{
	  if (ship->ennemy->life <= 0)
	    {
	      my_putstr_color("green", "L'enemi à été neutralisé, bien joué !\n");
	      ship->ennemy->bool = 0;
	    }
	  else
	    my_putstr_color("gren", "Le vaisseau enemie a raté son attaque\n");
	}
    }
  return (1);
}

int				evade(t_ship *ship)
{
  int				i;

  i = rand() % 20 + 1;
  r_evade(ship, i);
  if (ship->tools->evade >= 76 && ship->tools->evade <= 150)
    {
      if (i >= 1 && i <= 5)
	test(ship);
      else
	if (ship->ennemy->life <= 0)
	  {
	    my_putstr_color("green", "L'enemi à été neutralisé, bien joué !\n");
	    ship->ennemy->bool = 0;
	  }
	else
	  my_putstr_color("gren", "Le vaisseau enemie a raté son attaque\n");
    }
  return (1);
}
