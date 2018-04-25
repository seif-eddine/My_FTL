/*
** readline.c for  in /home/kirito/etna/ftl/yousse_s/test/final/yousse_s/bonus/source
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Fri Nov 11 14:38:38 2016 YOUSSEF seif-eddine
** Last update Fri Nov 11 17:00:41 2016 YOUSSEF seif-eddine
*/
#include		<stdlib.h>
#include		<unistd.h>
#include		"ftl.h"

char			*readline(void)
{
  ssize_t		ret;
  char			*buff;

  if ((buff = malloc((50 + 1) * sizeof(char))) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 50)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff);
    }
  free(buff);
  return (NULL);
}

char			*my_strdup(const char *str)
{
  int                   i;
  char                  *copy;

  i = 0;
  copy = NULL;
  if ((copy = malloc((my_strlen(str) + 1) * sizeof(char))) == NULL)
    return (NULL);
  while (str[i] != '\0')
    {
      copy[i] = str[i];
      i++;
    }
  copy[i] = '\0';
  return (copy);
}
