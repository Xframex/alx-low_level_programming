#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters) {
    if (filename == NULL)
        return 0;

    FILE *file = fopen(filename, "r");
    if (file == NULL)
        return 0;

    char buffer[letters + 1];  // +1 for null terminator
    ssize_t bytesRead = fread(buffer, sizeof(char), letters, file);
    buffer[bytesRead] = '\0';  // Null terminate the buffer

    if (ferror(file)) {
        fclose(file);
        return 0;
    }

    fclose(file);

    ssize_t bytesWritten = fwrite(buffer, sizeof(char), bytesRead, stdout);
    if (bytesWritten != bytesRead)
        return 0;

    return bytesRead;
}

