#ifndef FILEIO_H
#define FILEIO_H

void processMapFile(char* mapName,int*** mapData, int** dimensions);
void freeMapData(int*** mapData, int** dimensions, int row);

#endif
