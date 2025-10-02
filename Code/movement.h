#ifndef MOVEMENT_H
#define MOVEMENT_H

void movePlayer(int** mapData, int* mapDimensions, char actionChar);
int isValidGrid(int** mapData, int* mapDimensions, int x, int y);


#endif
