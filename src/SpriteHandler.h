#pragma once
#include <gb/gb.h>



typedef struct Character{
    uint8_t SpriteId;
    uint8_t SpriteTileWidth;
    uint8_t SpriteTileHeight;
    uint8_t SpriteFrames;
    uint8_t SpriteCurrentFrame;
    uint8_t XPos;
    uint8_t YPos;
    uint8_t TilesetStart;
    const unsigned char *Tileset;
} Character;
 
void InitChar(Character *Char, uint8_t SpriteId, uint8_t SpriteTileWidth, 
    uint8_t SpriteTileHeight, uint8_t SpriteFrames, uint8_t TilesetStart, 
    const unsigned char *Tileset);

void LoadSpriteFrame(Character *Char, uint8_t Frame);
void MoveCharacter(Character *Char, uint8_t x, uint8_t y);

void SetSpriteData(uint8_t FirstTile, uint8_t NumTiles, const uint8_t *Data);
void SetSpriteTile(uint8_t SpriteNumber, uint8_t Tile);
void MoveSprite(uint8_t SpriteNumber, uint8_t x, uint8_t y);
