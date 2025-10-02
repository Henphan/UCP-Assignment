#include "terminal.h"
#include <stdio.h>

void displayActions(void){
    printf("Press 'w' to move UP\n");
    printf("Press 'a' to move LEFT\n");
    printf("Press 's' to move DOWN\n");
    printf("Press 'd' to move RIGHT\n");
    printf("Press 'u' to move UNDO\n");
}
char getInput(void){
    char ch;
    printf("Enter the action: ");
    disableBuffer();   
    scanf(" %c", &ch);
    enableBuffer();    
    return ch;
}
