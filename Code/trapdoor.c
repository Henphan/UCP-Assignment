void activateTrapdoor(int** mapData, int* mapDimensions){
    int i, j;
    for(i = 0; i < mapDimensions[0]; i++){
        for(j = 0; j < mapDimensions[1]; j++){
            if(mapData[i][j] == 3){
                mapData[i][j] = 0;
            }
        }
    }
}
