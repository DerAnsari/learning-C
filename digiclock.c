#include <stdbool.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() {
  time_t rawTIME = 0; // epoch of UNIX

  struct tm *timeptr = NULL;
  bool isRunning = true;

  printf("DIGITAL CLOCK \n");

  while (isRunning) {
    time(&rawTIME);
    timeptr = localtime(&rawTIME);

    printf("\r%02d : %02d : %02d", (*timeptr).tm_hour, timeptr->tm_min,
           timeptr->tm_sec);
    fflush(stdout);
    sleep(1);
  }
  return 0;
}