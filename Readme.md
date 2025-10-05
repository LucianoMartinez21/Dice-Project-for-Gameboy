# Dice Gameboy Application
Small Application to roll a dice in the GameBoy Console, Implemented using the public library GBDK for C.

Things to fix are:
* Implement D6, D8, D10, D12, D20 and D100.

## How get a .gb file?

1. Clone or Download the project.
2. Clone or Download the DBDK.
https://github.com/gbdk-2020/gbdk-2020/
3. Change the Makefile to address the location of GBDK files
```Make
ifndef GBDK_HOME
	GBDK_HOME = ../{your_folder}/gbdk/
endif
LCC = $(GBDK_HOME)bin/lcc 
```
4. Using a terminal inside the project's folder execute the make command.
```bash
make
```

## Tools Used
* GBDK: To develop the project using C.
* GBTD: To design the sprites for the project.
* GBMD & TilemapStudio: To design the Tilemaps.


## Acknowledgments

* **Coding: Luciano Martínez**
* **Art by Luciano Martínez**

I don't claim any ownership over The Gameboy trademark for the development for this project, Gameboy and all its rights related are own by Nintendo©.




