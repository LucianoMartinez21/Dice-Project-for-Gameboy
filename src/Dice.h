#pragma once
#include <rand.h>
#include <gb/gb.h>

#define TWO_SIDE_DICE 2
#define FOUR_SIDE_DICE 4
#define SIX_SIDE_DICE 6
#define EIGHT_SIDE_DICE 8
#define TEN_SIDE_DICE 10
#define TWELVE_SIDE_DICE 12
#define TWENTY_SIDE_DICE 20
#define HUNDRED_SIDE_DICE 100


void InitDice();
uint8_t RollDice(uint8_t Sides);
uint8_t RollD2();
uint8_t RollD4();
uint8_t RollD6();
uint8_t RollD8();
uint8_t RollD10();
uint8_t RollD12();
uint8_t RollD20();
uint8_t RollD100();