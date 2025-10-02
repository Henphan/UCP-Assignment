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

    mapData[currX][currY] = 0;

    switch (actionChar)
    {
    case 'w':
        mapData[currX-1][currY] = 5;
        break;
    case 'a':
        mapData[currX][currY-1] = 5;
        break;
    case 's':
        mapData[currX+1][currY] = 5;
        break;
    case 'd':
        mapData[currX][currY+1] = 5;
        break;
    default:
        break;
    }
}
