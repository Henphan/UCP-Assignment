#include <stdio.h>
#include "movement.h"

void movePlayer(int** mapData, int* mapDimensions, char actionChar){
    int currX, currY;
    int i, j;
    for(i = 0; i < mapDimensions[0]; i++){
        for(j = 0; j < mapDimensions[1]; j++){
            if(mapData[i][j] == 5){
                currX = i;
                currY = j;
            }
        }
    }

    switch (actionChar)
    {
    case 'w':
        if(isValidGrid(mapData, mapDimensions, currX-1, currY)){
            mapData[currX][currY] = 0;
            mapData[currX-1][currY] = 5;
        }
        break;
    case 'a':
        if(isValidGrid(mapData, mapDimensions, currX, currY-1)){
            mapData[currX][currY] = 0;
            mapData[currX][currY-1] = 5;
        }
        break;
    case 's':
        if(isValidGrid(mapData, mapDimensions, currX+1, currY)){
            mapData[currX][currY] = 0;
            mapData[currX+1][currY] = 5;
        }
        break;
    case 'd':
        if(isValidGrid(mapData, mapDimensions, currX, currY+1)){
            mapData[currX][currY] = 0;
            mapData[currX][currY+1] = 5;
        }
        break;
    default:
        break;
    }
}

int isValidGrid(int** mapData, int* mapDimensions, int x, int y){
    int isValid = 1;
    /* out of bounds */
    if(x < 0 || y < 0 || x >= mapDimensions[0] || y >= mapDimensions[1]){ 
        isValid = 0;
    }
    /* not empty space */
    else if(mapData[x][y] != 0){
        isValid = 0;
    }
    return isValid;
}
