#include <gb/gb.h>
#include "elem_pair.h"

const DictEntry entries[] =
{
  {WATER, AIR, RAIN},
  {FIRE, EARTH, LAVA},
  {WATER, FIRE, STEAM}
};
const UBYTE entriesLength = 3u;

ElemType elemArg1;
ElemType elemArg2;

ElemType getPairResult()
{
  UBYTE i;
  DictEntry* entry;
  for(i = 0; i != entriesLength; ++i)
  {
    entry = &entries[i];
    if((elemArg1 == entry->e1 && elemArg2 == entry->e2) ||
      (elemArg1 == entry->e2 && elemArg2 == entry->e1))
    {
      return entry->result;
    }
  }
  return NONE;
}
