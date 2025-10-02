#include "fileIO.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    char* mapName = NULL;
    int** mapData = NULL;
    int* mapDimensions = NULL;
    int row, col;
    

    int i, j;
    if(argc != 2){
        /* too much or too little argument */
        printf("Invalid amount of argument\n");
    }
    else{
        mapName = argv[1];

        processMapFile(mapName, &mapData, &mapDimensions);
        row = mapDimensions[0];
        col = mapDimensions[1];

        for(i = 0; i < row; i++){
            for(j = 0; j < col; j++){
                printf("%d ", mapData[i][j]);
            }
            printf("\n");
        }
        freeMapData(&mapData, &mapDimensions, row);
    }
    return 1;
}
