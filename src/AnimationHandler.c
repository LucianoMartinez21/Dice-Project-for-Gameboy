#include "AnimationHandler.h"

void AnimationRollD2(uint8_t Result){

    for(int i = 0; i != 5; i++){
        if (Result == 1 && i + 1 == 5)
        {
            LoadSpriteFrame(&DiceCharacter, 0);
            break;
        }
        LoadSpriteFrame(&DiceCharacter, 0);
        delay(150);
        LoadSpriteFrame(&DiceCharacter, 1);
        delay(150);
        LoadSpriteFrame(&DiceCharacter, 2);
        delay(150);
        LoadSpriteFrame(&DiceCharacter, 3);
        delay(150);
        if (Result == 2 && i + 1 == 5)
        {
            LoadSpriteFrame(&DiceCharacter, 4);
            break;
        }
        LoadSpriteFrame(&DiceCharacter, 4);
        delay(150);
        LoadSpriteFrame(&DiceCharacter, 2);
        delay(150);
        LoadSpriteFrame(&DiceCharacter, 1);
        delay(150);
    }
    delay(200);

}
void AnimationRollD4(uint8_t Result){

    for(int i = 0; i != 5; i++){
        if (Result == 1 && i + 1 == 5)
        {
            LoadSpriteFrame(&DiceCharacter, 5);
            break;
        }
        LoadSpriteFrame(&DiceCharacter, 5);
        delay(150);
        LoadSpriteFrame(&DiceCharacter, 6);
        delay(150);
        if (Result == 2 && i + 1 == 5)
        {
            LoadSpriteFrame(&DiceCharacter, 7);
            break;
        }
        LoadSpriteFrame(&DiceCharacter, 7);
        delay(150);
        LoadSpriteFrame(&DiceCharacter, 6);
        delay(150);
        if (Result == 3 && i + 1 == 5)
        {
            LoadSpriteFrame(&DiceCharacter, 8);
            break;
        }
        LoadSpriteFrame(&DiceCharacter, 8);
        delay(150);
        LoadSpriteFrame(&DiceCharacter, 6);
        delay(150);
        if (Result == 4 && i + 1 == 5)
        {
            LoadSpriteFrame(&DiceCharacter, 9);
            break;
        }
        LoadSpriteFrame(&DiceCharacter, 9);
        delay(150);
        LoadSpriteFrame(&DiceCharacter, 6);
        delay(150);
    }
    delay(200);

}