#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define HEIGHT 50
#define WIDTH 50
typedef char Board[HEIGHT][WIDTH];
void updateBoard(Board currBoard, Board nextBoard);
void displayBoard(Board currBoard);

int main() {

  // Generate the initial Board
  Board currBoard;
  Board nextBoard;
  Board *currPtr = &currBoard;
  Board *nextPtr = &nextBoard;

  srand(time(NULL));
  int min = 0;
  int max = 1;

  for (int i = 0; i < HEIGHT; i++) {
    for (int j = 0; j < WIDTH; j++) {
      currBoard[i][j] = ((rand() % 5) == 0) ? 1 : 0;
    }
  }

  // initial clear
  printf("\x1b[2J");

  // Master Loop goes once and updates sim
  while (true) {
    // sm formating stuff aparantly reset cursor to top-right
    printf("\x1b[H");

    // display the new board
    displayBoard(*currPtr);
    fflush(stdout);

    // update the board
    updateBoard(*currPtr, *nextPtr);

    // copy new board to the old board
    Board *temp = currPtr;
    currPtr = nextPtr;
    nextPtr = temp;

    usleep(100000);
  }
  return 0;
}

void checkLive(Board currBoard, int *liveNeighbour, int H, int W) {
  int count = 0;

  for (int i = -1; i <= 1; i++) {
    for (int j = -1; j <= 1; j++) {
      if (i == 0 && j == 0)
        continue;

      int ni = H + i;
      int nj = W + j;

      if (ni >= 0 && ni < HEIGHT && nj >= 0 && nj < WIDTH) {
        if (currBoard[ni][nj] == 1) {
          count++;
        }
      }
    }
  }
  (*liveNeighbour) = count;
}

void updateBoard(Board currBoard, Board nextBoard) {
  for (int i = 0; i < HEIGHT; i++) {
    for (int j = 0; j < WIDTH; j++) {
      int liveNeighbour = 0;
      checkLive(currBoard, &liveNeighbour, i, j);

      if (currBoard[i][j] == 1) {
        if (!(liveNeighbour == 2 || liveNeighbour == 3))
          nextBoard[i][j] = 0;
        else
          nextBoard[i][j] = 1;

      } else {
        if (liveNeighbour == 3)
          nextBoard[i][j] = 1;
        else
          nextBoard[i][j] = 0;
      }
    }
  }
}

void displayBoard(Board currBoard) {
  for (int i = 0; i < HEIGHT; i++) {
    for (int j = 0; j < WIDTH; j++) {
      if (currBoard[i][j] == 1) {
        printf("██"); // Live cell
      } else {
        printf("  "); // Dead cell (two spaces)
      }
    }
    printf("\n");
  }
}