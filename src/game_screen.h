#ifndef GAME_SCREEN_H_
#define GAME_SCREEN_H_
#include <gb/gb.h>
typedef struct
{
	UBYTE x;
	UBYTE y;
	UBYTE w;
	UBYTE h;
} Box;

void game_screen();

#endif
