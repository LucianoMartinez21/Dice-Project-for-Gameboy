#pragma once
#include <gb/gb.h>
#include "SpriteHandler.h"
#define MAX_LENGHT 2

extern uint8_t DiceIndex;
extern uint8_t DiceLenght;
extern BOOLEAN Credits;
extern Character DiceCharacter;
enum DiceTypes
{
    D2,
    D4,
    D6
};
extern enum DiceTypes GlobalDiceType;