/*
** my_string2.c for  in /home/kirito/etna/ftl/yousse_s
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Thu Nov 10 14:49:59 2016 YOUSSEF seif-eddine
** Last update Thu Nov 10 19:53:20 2016 YOUSSEF seif-eddine
*/

#include		"ftl.h"
#include		<stdlib.h>
#include		<unistd.h>

const char		*reset_color = "\033[0m";

typedef			struct s_color	t_color;

struct			s_color
{
  char			*color;
  char			*unicode;
};

static const t_color	g_color[] =
  {
    {"clear", "\033[H\033[2J"},
    {"red", "\033[31m"},
    {"green", "\033[32m"},
    {"yellow", "\033[33m"},
    {"blue", "\033[34m"},
    {"magenta", "\033[35m"},
    {"cyan", "\033[36m"},
    {NULL, NULL}
  };

void			my_putchar(const char c)
{
  write(1, &c, 1);
}

int			my_strlen(const char *str)
{
  int			i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

void			my_putstr(const char *str)
{
  write(1, str, my_strlen(str));
}

int			my_strcmp(const char *s1, const char *s2)
{
  int			i;

  if (s1 == NULL || s2 == NULL)
    return (-2);
  i = 0;
  while (s1[i] != '\0')
    {
      if (s1[i] > s2[i])
	return (1);
      else if (s1[i] < s2[i])
	return (-1);
      i++;
    }
  if (s2[i] != '\0')
    return (-1);
  return (0);
}

void			my_putstr_color(const char *color, const char *str)
{
  int			i;

  i = 0;
  while (g_color[i].color != NULL && (my_strcmp(g_color[i].color, color) != 0))
    i++;
  if (g_color[i].color == NULL)
    {
      my_putstr(str);
      return ;
    }
  my_putstr(g_color[i].unicode);
  my_putstr(str);
  my_putstr(reset_color);
}
