#include <stdio.h>
#include "colour.h"

void displayMap(int** mapData, int* mapDimensions){
    int i, j;
    char character;

    int row = mapDimensions[0];
    int col = mapDimensions[1];

    for(i = 0; i < col+2; i++){
        printf("*");
    }
    printf("\n");
    for(i = 0; i < row; i++){
        printf("*");
        for(j = 0; j < col; j++){
            switch (mapData[i][j])
            {
            case 0:
                character = ' ';
                break;
            case 1:
                character = 'O';
                break;
            case 2:
                character = '~';
                setBackground("blue");
                break;
            case 3:
                character = 'X';
                break;
            case 4:
                character = '@';
                setBackground("red");
                break;
            case 5: 
                character = 'P';
                break;
            case 6:
                character = 'G';
                setBackground("green");
                break;
            default:
                break;
            };
            printf("%c", character);
            setBackground("reset");
            if(j == col-1){
                printf("*");
            }
        }
        printf("\n");
    }
    for(i = 0; i < col+2; i++){
        printf("*");
    }
    printf("\n");
}