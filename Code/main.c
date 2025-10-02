#include "fileIO.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    char* mapName = NULL;
    int** mapData = NULL;
    if(argc != 2){
        /* too much or too little argument */
        printf("Invalid amount of argument\n");
    }
    else{
        mapName = argv[1];
        processMapFile(mapName, mapData); /* points mapData to a 2d array of ints */
    }
    return 1;
}
