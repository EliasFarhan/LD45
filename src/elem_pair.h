
#ifndef ELEM_PAIR_H_
#define ELEM_PAIR_H_
typedef enum
{
	WATER = 0u,
	FIRE,
	AIR,
	EARTH,
	RAIN,
	THUNDER,
  LAVA,
  DUST,
  CLAY,
  STEAM,
  LIFE,
  METAL,
  PAN,
  PLANT,
  WOOD,
  COAL,
  OIL,
  PIGEON,
  PISTOL,
  STOVE,
  FISH,
  VEGETABLES,
  CHILI,
  POTATO,
  VACUUM,
  CAR,
  RAIL,
  PLANE,
  BEEF,
  BURGER,
  HEAT,
  GOLD,
  HUMAN,
  CHICKEN,
  SPICE,
  BLADE,
  SWORD,
  GUITAR,
  TOASTER,
  EEL,
  SUSHI,
  AXE,
  STEAK,
  STICK,
  RAFT,
  BOAT,
  UMBRELLA,
  BROOM,
  MUSHROOM,
  BUG,
  CHIMNEY,
  POT,
  BRICK,
  LENGTH,
  NONE
} ElemType;

typedef struct
{
	ElemType e1;
	ElemType e2;
	ElemType result;
} DictEntry;

extern ElemType elemArg1;
extern ElemType elemArg2;
ElemType getPairResult();

#endif
