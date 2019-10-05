#include <string.h>
#include "game_screen.h"
#include "../data/sprites/font.h"


UBYTE gameBoolVariables;
UBYTE keys;

const unsigned char text []= "hello world";
const UBYTE origin = 97u;//'a'
UBYTE text_pos_x;
UBYTE text_pos_y;
UBYTE sprite_index;

#define FINISH_INDEX 0u
#define FINISH_BOOL (1u & gameBoolVariables)


void set_text_sprites() NONBANKED
{
  UBYTE index;
  UBYTE letter;

  SWITCH_ROM_MBC1(FontLettersBank);
  for(index = 0u; index != 11u; ++index)
  {
    if(text[index] == ' ')
    {
      continue;
    }
    set_sprite_prop(sprite_index,0x00U);

    set_sprite_tile(sprite_index, text[index]-origin);
    move_sprite(sprite_index, text_pos_x + (index << 3u), text_pos_y);
    sprite_index++;
  }
}

void init_screen() NONBANKED
{

	wait_vbl_done();
	disable_interrupts();

	HIDE_BKG;
	HIDE_SPRITES;
	HIDE_WIN;
	DISPLAY_OFF;

  ENABLE_RAM_MBC1;
  gameBoolVariables = 0u;
  SWITCH_ROM_MBC1(FontLettersBank);
  set_sprite_data(0u, 26u, FontLetters);

  SPRITES_8x8;//TODO: why not 8x16?

  DISPLAY_ON;
  SHOW_BKG;
  SHOW_SPRITES;
  enable_interrupts();

  text_pos_x = 8u;
  text_pos_y = 80u;
}

void game_screen() NONBANKED
{
  init_screen();
  while(!FINISH_BOOL)
  {
    wait_vbl_done();
		keys = joypad();
    sprite_index = 0u;
    set_text_sprites();
  }
}
