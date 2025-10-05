REM Automatically generated from Makefile
mkdir obj
..\gbdk\bin\lcc   -c -o obj\main.o src\main.c
..\gbdk\bin\lcc   -c -o obj\dungeon_map.o res\dungeon_map.c
..\gbdk\bin\lcc   -c -o obj\dungeon_tiles.o res\dungeon_tiles.c
..\gbdk\bin\lcc   -o obj\Example.gb obj\main.o obj\dungeon_map.o obj\dungeon_tiles.o 
