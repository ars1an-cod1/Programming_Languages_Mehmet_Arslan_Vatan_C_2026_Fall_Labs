// week5_task1_file_io.c
// Name: ____Mehmet Arslan____  Surname: _____Vatan___  Student ID:
// _____251AIB047___
//
// Task 1: Read and write data from text files
// Week 5 – Files & Modular Programming
// TODO: Fill in the missing parts marked below.
//
// Build: make lab5   Run: ./bin/week5_task1_file_io

#include <stdio.h>
#include <stdlib.h>

#define DEFAULT_FILENAME "data.txt"
#define LINE_LEN 256  // for reading max 256 character

int main(int argc, char* argv[]) {  // program can be taken words from terminal
  FILE* fp = NULL;                  // initial point be zero
  const char* filename = DEFAULT_FILENAME;  // is not able to change
  char line[LINE_LEN];
  int line_count = 0;  // line count starts with zero

  if (argc > 1) {
    filename = argv[1];
  }

  printf("Writing lines to %s...\n", filename);
  fp = fopen(filename, "w");

  if (fp == NULL) {
    perror(filename);

    return EXIT_FAILURE;
  }

  fprintf(fp, "Hello World\n  ");
  fprintf(fp, "Wonderfull day for living\n");
  fprintf(fp, "Everyday has an opportunity \n");
  fclose(fp);

  fp=fopen( filename, "r");

  if (fp == NULL) {
    perror(filename);
 
    return EXIT_FAILURE;
}

  printf("Reading contents:\n");

  while (fgets(line, LINE_LEN, fp) != NULL) {
    printf("%s", line);
    line_count++;
}



  
  (void)argc;
  (void)argv;
  (void)fp;
  (void)filename;
  (void)line;
  (void)line_count;

  return EXIT_SUCCESS;
}
