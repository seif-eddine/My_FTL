/*
** sdl.c for  in /home/kirito/etna/ftl/yousse_s/test/final/yousse_s/bonus/source
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Fri Nov 11 11:10:38 2016 YOUSSEF seif-eddine
** Last update Fri Nov 11 14:44:10 2016 YOUSSEF seif-eddine
*/

#include		"ftl.h"
#include		<SDL/SDL.h>
#include		<SDL/SDL_mixer.h>

int			init_sdl()
{
  if (SDL_Init(SDL_INIT_VIDEO) == -1)
    my_putstr(SDL_GetError());
  return (1);
}

int			init_windows()
{
  SDL_Surface		*ecran;
  SDL_Surface		*img;
  SDL_Rect		positionFond;

  positionFond.x = 0;
  positionFond.y = 0;
  ecran = NULL;
  img = NULL;
  ecran = SDL_SetVideoMode(1000, 563, 32, SDL_HWSURFACE);
  SDL_WM_SetCaption("Yousse_s etna piscine / MY_FTL", NULL);
  img = SDL_LoadBMP("source/freezer.bmp");
  SDL_BlitSurface(img, NULL, ecran, &positionFond);
  SDL_Flip(ecran);
  SDL_Delay(2000);
  SDL_FreeSurface(img);
  return (1);
}

int			init_windows1()
{
  SDL_Surface		*ecran;
  SDL_Surface		*img;
  SDL_Rect		positionFond;

  positionFond.x = 0;
  positionFond.y = 0;
  ecran = NULL;
  img = NULL;
  ecran = SDL_SetVideoMode(1000, 563, 32, SDL_HWSURFACE);
  SDL_WM_SetCaption("Yousse_s etna piscine / MY_FTL", NULL);
  img = SDL_LoadBMP("source/freezerb.bmp");
  SDL_BlitSurface(img, NULL, ecran, &positionFond);
  SDL_Flip(ecran);
  SDL_Delay(2000);
  SDL_FreeSurface(img);
  return (1);
}


int			run_sdl()
{
  init_sdl();
  init_windows();
  SDL_Quit();
  return (1);
}

int			run_sdl1()
{
  init_sdl();
  init_windows1();
  SDL_Quit();
  return (1);
}
