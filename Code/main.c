#include "fileIO.h"
#include "interface.h"
#include "input.h"
#include "movement.h"
#include "endGame.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    char* mapName = NULL;
    int** mapData = NULL;
    int* mapDimensions = NULL;

    int stop = 0;
    char ch;

    if(argc != 2){
        /* too much or too little argument */
        printf("Invalid amount of argument\n");
    }
    else{
        mapName = argv[1];

        processMapFile(mapName, &mapData, &mapDimensions);
        
        system("clear");
        displayMap(mapData, mapDimensions);

        while(!stop){
            ch = getInput();
            system("clear");
            movePlayer(mapData, mapDimensions, ch);
            displayMap(mapData, mapDimensions);
            if(isFinished(mapData, mapDimensions)){
                stop = 1;
            }
        }

        freeMapData(&mapData, &mapDimensions);
    }
    return 1;
}
