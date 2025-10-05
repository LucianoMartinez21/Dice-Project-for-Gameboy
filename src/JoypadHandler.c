#include "JoypadHandler.h"

void JoypadHandler()
{
    switch (joypad())
    {
    case J_A:
        if (DiceIndex == D2)
            AnimationRollD2(RollD2());
        else if (DiceIndex == D4)
            AnimationRollD4(RollD4());
        break;
    case J_LEFT:
        DiceIndex--;
        if (DiceIndex == 255)
            DiceIndex = MAX_LENGHT-1;
        if (DiceIndex == D2)
            LoadSpriteFrame(&DiceCharacter, 0);
        else if (DiceIndex == D4)
            LoadSpriteFrame(&DiceCharacter, 5);
        break;
    case J_RIGHT:
        DiceIndex++;
        if (DiceIndex > MAX_LENGHT-1)
            DiceIndex = 0;
        if (DiceIndex == D2)
            LoadSpriteFrame(&DiceCharacter, 0);
        else if (DiceIndex == D4)
            LoadSpriteFrame(&DiceCharacter, 5);
        break;
    case J_SELECT:
        Credits = !Credits;
        if (Credits == TRUE)
        {
            set_bkg_tiles(0, 0, 20u, 18u, Credits_tilemap);
            HIDE_SPRITES;
        }
        else
        {
            set_bkg_tiles(0, 0, 20u, 18u, FinalMenu_tilemap);
            SHOW_SPRITES;
        }
        break;
    
    default:
        if (Credits == TRUE)
            break;
        set_bkg_tiles(0, 0, 20u, 18u, FinalMenu_tilemap);
        break;
    }
}