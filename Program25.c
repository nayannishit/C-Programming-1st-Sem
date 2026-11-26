#include <stdio.h>

int main(void) {
    FILE *fp;
    char filename[256];
    int ch;
    int lastChar = '\n';
    int hasContent = 0;
    int lineCount = 0;

    printf("Enter the filename to count lines: ");
    if (scanf("%255s", filename) != 1) return 1;
    fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        hasContent = 1;
        lastChar = ch;
        if (ch == '\n') lineCount++;
    }
    if (ferror(fp)) {
        perror("Error reading file");
        fclose(fp);
        return 1;
    }
    fclose(fp);

    /* Count a final non-empty line even when it has no trailing newline. */
    if (hasContent && lastChar != '\n') lineCount++;
    printf("Number of lines in the file = %d\n", lineCount);
    return 0;
}
