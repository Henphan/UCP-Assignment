#include <stdio.h>
#include <stdlib.h>

void processMapFile(char* mapName,int*** mapData, int** dimensions){
    FILE* mapFile = fopen(mapName, "r");
    int i, j;

    int val;
    int row, col;

    if(mapFile != NULL){    
        *dimensions = (int*)malloc(sizeof(int) * 2);

        fscanf(mapFile, "%d %d", &row, &col); /* assigning the dimension array */
        (*dimensions)[0] = row;
        (*dimensions)[1] = col;

        *mapData = (int**)malloc(sizeof(int*) * row); /* mallocing the matrix */
        for(i = 0; i < row; i++){
            (*mapData)[i] = (int*)malloc(sizeof(int) * col); 
        }
        for(i = 0; i < row; i++){
            for(j = 0; j < col; j++){
                fscanf(mapFile, "%d", &val);
                (*mapData)[i][j] = val;
            }
        }
    fclose(mapFile);
    }
    else{
        printf("The file %s does not exist.\n", mapName);
    }
}

void freeMapData(int*** mapData, int** dimensions, int row){
    int i;
    for(i = 0; i < row; i++){
        free((*mapData)[i]);
    }
    free(mapData);
    free(dimensions);
}
