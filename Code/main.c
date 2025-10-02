#include "fileIO.h"
#include "interface.h"
#include "terminal.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    char* mapName = NULL;
    int** mapData = NULL;
    int* mapDimensions = NULL;

    char ch = 'a';

    if(argc != 2){
        /* too much or too little argument */
        printf("Invalid amount of argument\n");
    }
    else{
        mapName = argv[1];

        processMapFile(mapName, &mapData, &mapDimensions);
        
        displayMap(mapData, mapDimensions);

        while(ch != '0'){
            printf("Enter the action: ");
            disableBuffer();   /* <-- Call this just before scanf() function */
            scanf(" %c", &ch);
            enableBuffer();    /* <-- Call this after scanf() function to resume default behaviour */

            printf("%c\n", ch);
        }

        freeMapData(&mapData, &mapDimensions);
    }
    return 1;
}
