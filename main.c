/* basato sul video di Sanfilippo https://www.youtube.com/watch?v=c5atNuYdKK8 
Conway's Game of Life https://en.wikipedia.org/wiki/Conway%27s_Game_of_Life 

Rules: 
una cellula è sempre viva se ha sempre due o tre celle vicine vive
viversa muore
 _______
|NW N NE|
|W  C  E|
|SW S SE|
 _______

una cellula morta diventa viva se ha esattamente tre celle vicine vive
una cellula morta resta morta se ha meno di tre o più di tre celle vicine vive

*/ 
#include <stdio.h>

#define COLS 25
#define ROWS 25
#define ALIVE '*'
#define DEAD '.'

int main(void){
    char grid[COLS*ROWS];
    setgrid();
    getgrid();
}