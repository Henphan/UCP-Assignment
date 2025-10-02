#ifndef FILEIO_H
#define FILEIO_H

int* getMapDimension(char* mapName, int* dimensions);
void processMapFile(char* mapName,int*** mapData, int row, int col);

#endif
