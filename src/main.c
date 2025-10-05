#include <gb/gb.h>
#include <stdint.h>
#include <stdio.h>
#include "../res/TestMenu.h"
#include "../res/FinalMenu.h"
#include "../res/ExampleMenu.h"
#include "../res/DiceSprites.h"
#include "Dice.h"
#include "globals.h"
#include "JoypadHandler.h"
#include "SpriteHandler.h"
#include "AnimationHandler.h"


void init_gfx(void) {
    // Load Background tiles and then map
    // Reminder to change the name of the tiles file, because of _TileLabel error.
    /* set_bkg_data(FirstTileIndex, NumberOfTiles, TilePointer);*/
    // Turn the background map on to make it visible
    /* set_bkg_tiles(StartXPos, StartYPos, WidthArea, HeightArea, MapPointer) */
    
    set_bkg_data(0, 67u, TestTiles);
    //set_bkg_tiles(0, 0, 20u, 18u, ExampleMenu_tilemap);
    set_bkg_tiles(0, 0, 20u, 18u, FinalMenu_tilemap);
    InitChar(&DiceCharacter, 0, 2, 2, 64, 16, DiceSpriteIndex);
    
    SHOW_BKG;
    SHOW_SPRITES;
    
}


void main(void)
{
	init_gfx();
    InitDice();
    
    // Loop forever
    while(1) {
        JoypadHandler(); 
        delay(50);
		// Game main loop processing goes here
		// Done processing, yield CPU and wait for start of next frame
        vsync();
    }
}
