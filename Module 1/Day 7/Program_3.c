#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

int main() {
    FILE *fp;
    char line[MAX_LINE_LENGTH];
    char *token;

    fp = fopen("data.csv", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    while (fgets(line, MAX_LINE_LENGTH, fp) != NULL) {
        token = strtok(line, ",");
        while (token != NULL) {
            printf("%s ", token);
            token = strtok(NULL, ",");
        }
        printf("\n");
    }

    fclose(fp);
    return 0;
}
