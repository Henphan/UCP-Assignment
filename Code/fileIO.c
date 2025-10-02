#include <stdio.h>
#include <stdlib.h>

void getMapDimension(char* mapName, int* dimensions){
    FILE* mapFile = fopen(mapName, "r");

    if(mapFile != NULL){
        fscanf(mapFile, "%d %d", &dimensions[0], &dimensions[1]); /* reading the matrix dimensions */
    }
    fclose(mapFile);
}

void processMapFile(char* mapName,int*** mapData, int row, int col){
    FILE* mapFile = fopen(mapName, "r");
    int i, j;

    int val;

    if(mapFile != NULL){    
        fscanf(mapFile, "%d %d", &row, &col);
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
        
        /*for(i = 0; i < row; i++){
            for(j = 0; j < col; j++){
                printf("%d ", (*mapData)[i][j]);
            }
            printf("\n");
        }*/

    fclose(mapFile);
    }
    else{
        printf("The file %s does not exist.\n", mapName);
    }
}
