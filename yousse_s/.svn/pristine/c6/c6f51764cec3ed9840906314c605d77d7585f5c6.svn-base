/*
** air_shed.c for  in /home/kirito/etna/ftl/yousse_s
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Mon Nov  7 09:29:41 2016 YOUSSEF seif-eddine
** Last update Fri Nov 11 18:14:50 2016 YOUSSEF seif-eddine
*/
#include		"ftl.h"

t_ship			*create_ship()
{
  t_ship		*ship;

  my_putmsg_r("construction du vaisseau en cour...\n");
  if ((ship = malloc(sizeof(t_ship))) == NULL)
    {
      my_putmsg_y("le vaisseau n'a pas pu etre construit ");
      my_putmsg_y("par manque de materiaux\n");
      return (NULL);
    }
  ship->rand = 0;
  ship->jump = 0;
  ship->detect = 0;
  ship->i = 0;
  ship->hull = 50;
  ship->weapon = NULL;
  ship->drive = NULL;
  ship->tools = NULL;
  ship->freeza = NULL;
  ship->pico = NULL;
  my_putmsg_g("amelioration du vaisseau terminé!\n");
  return (ship);
}

int			add_weapon_to_ship(t_ship *ship)
{
  t_weapon		*weapon;
  char			*str;

  str = "online";
  my_putmsg_r("ajout des armes en cours...\n");
  if ((weapon = malloc(sizeof(t_weapon))) == NULL)
    {
      my_putmsg_y("votre vaisseau a explose quand vous avez tente ");
      my_putmsg_y("d'ajouter les armes\n");
      return (0);
    }
  weapon->damage = 10;
  weapon->system_state = my_strdup(str);
  ship->weapon = weapon;
  my_putmsg_g("les armes on ete ajoutes avec succes!\n");
  return (1);
}

int			add_ftl_drive_to_ship(t_ship *ship)
{
  t_ftl_drive		*drive;
  char			*str;

  str = "online";
  my_putmsg_r("ajout du reacteur en cours...\n");
  if ((drive = malloc(sizeof(t_ftl_drive))) == NULL)
    {
      my_putmsg_y("votre vaisseau a explose lorsque vous ");
      my_putmsg_y("avez pose le reacteur\n");
      return (0);
    }
  drive->energy = 10;
  drive->system_state = my_strdup(str);
  ship->drive = drive;
  my_putmsg_g("le reacteur a ete ajoute avec succes!\n");
  return (1);
}

int			add_navigation_tools_to_ship(t_ship *ship)
{
  t_navigation_tools	*tools;
  char			*str;

  str = "online";
  my_putmsg_r("ajout des outils de navigations...\n");
  if ((tools = malloc(sizeof(t_navigation_tools))) == NULL)
    {
      my_putmsg_y("votre vaisseau a explose lorsque vous avez ");
      my_putmsg_y("pose les outils de navigations\n");
      return (0);
    }
  tools->sector = 0;
  tools->evade = 25;
  tools->system_state = my_strdup(str);
  ship->tools = tools;
  my_putmsg_g("les outils de navigations ont ete ajoutes avec succes!\n");
  return (1);
}

int		main()
{
  t_ship	*ship;
  t_ship	*tmp;

  if ((ship = malloc(sizeof(t_ship))) == NULL)
    return (0);
  clr();
  my_ftl_ascii();
  tmp = ship;
  srand (time (NULL));
  tmp = create_ship();
  add_weapon_to_ship(tmp);
  add_ftl_drive_to_ship(tmp);
  add_navigation_tools_to_ship(tmp);
  add_container_to_ship(tmp);
  init_debug_enemy(tmp);
  while (tmp->ennemy->bool != 3)
    {
      prompt(tmp);
      run_pico(tmp);
      run_freeza(tmp);
      if (tmp->ennemy->bool == 1)
	evade(tmp);
    }
  free(tmp);
  return (0);
}
