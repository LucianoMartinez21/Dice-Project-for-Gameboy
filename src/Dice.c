#include "Dice.h"


void InitDice()
{
    uint16_t seed = (DIV_REG << 8) | DIV_REG;
    initrand(seed);
}

uint8_t RollDice(uint8_t Sides)
{
    return rand() % Sides + 1;
}

uint8_t RollD2()
{
    return RollDice(TWO_SIDE_DICE);
}
uint8_t RollD4()
{
    return RollDice(FOUR_SIDE_DICE);
}
uint8_t RollD6()
{
    return RollDice(SIX_SIDE_DICE);
}
uint8_t RollD8()
{
    return RollDice(EIGHT_SIDE_DICE);
}
uint8_t RollD10()
{
    return RollDice(TEN_SIDE_DICE);
}
uint8_t RollD12()
{
    return RollDice(TWELVE_SIDE_DICE);
}
uint8_t RollD20()
{
    return RollDice(TWENTY_SIDE_DICE);
}
uint8_t RollD100()
{
    return RollDice(HUNDRED_SIDE_DICE);
}