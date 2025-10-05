#include "SpriteHandler.h"


void InitChar(Character *Char, uint8_t SpriteId, uint8_t SpriteTileWidth, 
    uint8_t SpriteTileHeight, uint8_t SpriteFrames, uint8_t TilesetStart, 
    const unsigned char *Tileset)
{
    Char->Tileset = Tileset;
    Char->SpriteId = SpriteId;
    Char->SpriteTileWidth = SpriteTileWidth;
    Char->SpriteTileHeight = SpriteTileHeight;
    Char->SpriteFrames = SpriteFrames;
    Char->TilesetStart = TilesetStart;
    set_sprite_data(0, Char->SpriteFrames, Char->Tileset);
    LoadSpriteFrame(Char, 0);
    MoveCharacter(Char, SCREENWIDTH/2, SCREENHEIGHT/2);
}

void LoadSpriteFrame(Character *Char, uint8_t Frame)
{
    Char->SpriteCurrentFrame = Frame;
    
    uint8_t SpriteCount = Char->SpriteTileWidth * Char->SpriteTileHeight;


    for (uint8_t i = 0; i != SpriteCount; i++)
    {
        set_sprite_tile(Char->SpriteId + i,
        Char->Tileset[Char->TilesetStart + i 
            + (Frame * SpriteCount)]);
        /*SetSpriteTile(Char->SpriteId + i, 
            Char->Tileset[Char->TilesetStart + i + (Frame * SpriteCount)]);*/
        
    }

}

void MoveCharacter(Character *Char, uint8_t x, uint8_t y)
{
    Char->XPos = x;
    Char->YPos = y;

    for (uint8_t itery = 0; itery != Char->SpriteTileHeight; itery++)
    {
        for (uint8_t iterx = 0; iterx != Char->SpriteTileWidth; iterx++)
        {
            move_sprite(Char->SpriteId + iterx + (itery * Char->SpriteTileWidth),
            Char->XPos + (iterx * 8), Char->YPos + (itery * 8));
        }
    }
}
