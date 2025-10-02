#include "fileIO.h"
#include "interface.h"
#include "input.h"
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
        
        displayMap(mapData, mapDimensions);

        while(!stop){
            ch = getInput();
            system("clear");
            displayMap(mapData, mapDimensions);
            printf("You just entered: %c\n", ch);
        }

        freeMapData(&mapData, &mapDimensions);
    }
    return 1;
}
