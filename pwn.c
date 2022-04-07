#include <stdio.h>

void main() {
    char fileName[] = "youveBeenPwned.txt";
    FILE *filePntr = fopen(fileName, "w");
    fprintf(filePntr,"%s","Its over buddy. Pal. Frewiend.");
    fclose(filePntr);
} 