/*
** picolo.c for  in /home/kirito/etna/ftl/yousse_s/test/final/yousse_s/source
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Fri Nov 11 17:43:51 2016 YOUSSEF seif-eddine
** Last update Fri Nov 11 18:12:07 2016 YOUSSEF seif-eddine
*/

#include			"ftl.h"

int				init_pico(t_ship *ship)
{
  t_pico			*pico;

  if ((pico = malloc(sizeof(t_pico))) == NULL)
    {
      my_putmsg_y("Bulma est mort ! SPOIL\n");
      return (0);
    }
  pico->heal = 10;
  ship->pico = pico;
  return (1);
}

int				run_pico(t_ship *ship)
{
  int				i;

  i = rand() % 20 + 1;
  if (ship->tools->sector != 1)
    {
      if ((i == 4) || (i == 12) || (i == 16))
	{
	  if (ship->hull <= 40)
	    {
	      my_putstr_color("green", "[ALLIE] Bulma : J'ai réparé ta coque fonce !\n");
	      my_putstr_color("green", "[SYSTEM] : Hull +10\n");
	      ship->hull += 10;
	    }
	}
      else if (i == 8)
	{
	  my_putstr_color("green", "[ALLIE] Bulma : Tu vas être content !\n");
	  my_putstr_color("green", "[ALLIE] Bulma : Tout est réparé !\n");
	  my_putstr_color("green", "[ALLIE] Bulma : Fonce !\n");
	  ship->hull = 50;
	}
    }
  return (1);
}
