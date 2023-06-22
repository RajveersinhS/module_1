#include <stdio.h>

int main() {
    FILE *file1, *file2;
    char ch;

    file1 = fopen("Frist_file.txt", "r");
    file2 = fopen("second_file.txt", "w");

    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, file2);
    }

    printf("File copied successfully!\\n");

    fclose(file1);
    fclose(file2);

    return 0;
}
