#include <stdio.h>
const char  JNE    = 0x75;

void changebyte(const char* FileName, int offset, char code) {

    FILE* ComFile = fopen(FileName, "r+");

    fseek(ComFile, offset, SEEK_CUR);
    fprintf(ComFile, "%c", code);
}

int main() {
    changebyte("pass.com", 0x1b, JNE);
    return 0;
}
