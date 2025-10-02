#include "fileIO.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    char* mapName = NULL;
    int** mapData = NULL;
    int row, col;
    int dimensions[2];

    int i, j;
    if(argc != 2){
        /* too much or too little argument */
        printf("Invalid amount of argument\n");
    }
    else{
        mapName = argv[1];

        getMapDimension(mapName, dimensions);
        row = dimensions[0];
        col = dimensions[1];

        processMapFile(mapName, &mapData, row, col);


        for(i = 0; i < dimensions[0]; i++){
            for(j = 0; j < dimensions[1]; j++){
                printf("%d ", mapData[i][j]);
            }
            printf("\n");
        }
    }
    return 1;
}
