int isFinished(int** mapData, int* mapDimensions){
    int finished = 1;
    int goalExist = 0;
    int i, j;
    for(i = 0; i < mapDimensions[0]; i++){
        for(j = 0; j < mapDimensions[1]; j++){
            if(mapData[i][j] == 6){
                goalExist = 1;
            }
        }
    }
    if(goalExist){
        finished = 0;
    }
    return finished;
}
