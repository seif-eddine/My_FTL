/*
** ftl.h for  in /home/kirito/etna/ftl/yousse_s
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Mon Nov  7 09:20:07 2016 YOUSSEF seif-eddine
** Last update Fri Nov 11 18:04:52 2016 YOUSSEF seif-eddine
*/
#ifndef			FTL_H_
# define		FTL_H_

# include		<stdlib.h>
# include		<unistd.h>
# include		<time.h>
# include		<SDL/SDL.h>

# define                clr() my_putstr("\033[H\033[2J");

typedef	struct		s_weapon
{
  int			damage;
  char			*system_state;
}			t_weapon;

typedef	struct		s_ftl_drive
{
  char			*system_state;
  int			energy;
}			t_ftl_drive;

typedef	struct		s_navigation_tools
{
  char			*system_state;
  int			sector;
  int			evade;
}			t_navigation_tools;

typedef	struct		s_freight
{
  char			*item;
  struct s_freight	*next;
  struct s_freight	*prev;
}			t_freight;

typedef	struct		s_container
{
  struct s_freight	*first;
  struct s_freight	*last;
  int			nb_elem;
}			t_container;

typedef struct		s_ennemy
{
  int			detect;
  int			life;
  int			damage;
  int			bool;
}			t_ennemy;

typedef struct		s_pico
{
  int			heal;
  char			*str;
}			t_pico;

typedef struct		s_freeza
{
  char			*str;
  int			unite;
  int			bdlm;
  int			detect;
  int			life;
  int			damage;
  int			bool;
}			t_freeza;

typedef	struct		s_ship
{
  int			detect;
  int			jump;
  int			rand;
  int			i;
  char			*str;
  int			hull;
  t_weapon		*weapon;
  t_ftl_drive		*drive;
  t_navigation_tools	*tools;
  t_container		*container;
  t_ennemy		*ennemy;
  t_freeza		*freeza;
  t_pico		*pico;
}			t_ship;

typedef	struct		s_repair_command
{
  int			(*repair)(t_ship *ship);
  char			*str;
}			t_repair_command;

typedef struct		s_game
{
  int			(*pf)(t_ship *ship);
  char			*str;
}			t_game;

typedef struct		s_fight
{
  int			(*pf2)(t_ship *ship);
  char			*str;
}			t_fight;

void			my_putchar(char c);
void			my_putstr(const char *str);
void			my_putmsg_r(char *str);
void			my_putmsg_g(char *str);
void			my_putmsg_b(char *str);
void			my_putmsg_y(char *str);
void			add_freight_to_container(t_ship *ship, t_freight *freight);
void			del_freight_from_container(t_ship *ship, t_freight *freight);
void			get_bonus(t_ship *ship);
void                    ftl_drive_system_check(t_ship *ship);
void                    navigation_tools_system_check(t_ship *ship);
void                    weapon_system_check(t_ship *ship);
void			system_control(t_ship *ship);
void                    my_putstr_color(const char *color, const char *str);
void			my_put_nbr(int nb);
void			my_ftl_ascii1();
void			my_ftl_ascii2();
void			my_ftl_ascii3();
void			my_ftl_ascii4();
void			my_ftl_ascii();
void			my_freza_ascii1();
void			my_freza_ascii2();
void			my_freza_ascii3();
void			my_freza_ascii4();
void			my_freza_ascii();

int			init_pico(t_ship *ship);
int			run_pico(t_ship *ship);
int			evade(t_ship *ship);
int			r_evade(t_ship *ship, int i);
int			init_sdl();
int			init_windows();
int			init_windows1();
int			run_sdl();
int			run_sdl1();
int			init_freeza(t_ship *ship);
int			stat_freeza(t_ship *ship);
int			run_freeza(t_ship *ship);
int			init_menue();
int			init_windows_menue();
int			run_menue();
int			r_attack(t_ship *ship);
int			critical_choice(t_ship *ship);
int			critical_weapon(t_ship *ship);
int			critical_ftl(t_ship *ship);
int			critical_tools(t_ship *ship);
int			detect(t_ship *ship);
int			sector(t_ship *ship);
int			test(t_ship *ship);
int			init_debug_enemy(t_ship *ship);
int			call_jump(t_ship *ship);
int			call_detect(t_ship *ship);
int			call_attack(t_ship *ship);
int                     debug_enemy(t_ship *ship);
int                     attack_enemy_basic(t_ship *ship);
int                     stat_enemy_basic(t_ship *ship);
int			my_rand();
int			call_control(t_ship *ship);
int			help();
int			stat(t_ship *ship);
int			call_getbonus(t_ship *ship);
int			call_systemrepair(t_ship *ship);
int			ftl_drive_system_repair(t_ship *ship);
int			navigation_tools_system_repair(t_ship *ship);
int			weapon_system_repair(t_ship *ship);
int                     add_container_to_ship(t_ship *ship);
int                     add_weapon_to_ship(t_ship *ship);
int                     add_ftl_drive_to_ship(t_ship *ship);
int                     add_navigation_tools_to_ship(t_ship *ship);
int			system_repair(t_ship *ship);
int			my_strlen(const char *str);
int			my_strcmp(const char *s1, const char *s2);
int			prompt(t_ship *ship);
int			quit(t_ship *ship);
int			zero_enemy(t_ship *ship);
int			maybe_enemy(t_ship *ship);
int			sure_enemy(t_ship *ship);
int			cargaison();
int			r_incre_color(t_ship *ship);
int			navi_system();


char			*my_strcpy(char *dest, char *src);
char			*my_strdup(const char *str);
char			*readline(void);

t_ship			*create_ship();

t_freight		*freight_t(t_ship *ship);

# endif			/*! FTL_H_ !*/
