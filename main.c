#include <stdio.h>

const int WIDTH = 20;
const int HEIGHT = 10;
int main(){
    printf("                                          ");
    for(int i = 0; i < HEIGHT; i++){
        for(int j = 0; j < WIDTH; j++){
            printf("#");
        }
        printf("\n");
        printf("                                          ");
    }
    printf("\n");
}