#include <stdio.h>
void writeFile(char fileName[30], char text[30]);
void readFile(char fileName[30]);

int main() {
  char fileName[30] = "output.txt";
  char text[30] = "HAPPY BIRTHDAY DANIEL";

  writeFile(fileName, text);
  readFile(fileName);

  return 0;
}

void writeFile(char fileName[30], char text[30]) {
  FILE *pFile = fopen(fileName, "w");

  if (pFile == NULL)
    return;

  fprintf(pFile, "%s", text);

  fclose(pFile);
}

void readFile(char fileName[30]) {
  FILE *pFile = fopen(fileName, "r");
  char buffer[1024] = {0};

  if (pFile == NULL)
    return;

  while (fgets(buffer, sizeof(buffer), pFile) != NULL) {
    printf("%s", buffer);
  }

  fclose(pFile);
}
