#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

void wc() {
    int c;
    int characters = 0, words = 0, lines = 0;
    bool in_word = false;

    while ((c = getchar()) != EOF) {
        characters++;

        if (c == '\n') {
            lines++;
        }

        if (isspace(c)) {
            if (in_word) {
                words++;
                in_word = false;
            }
        } else {
            in_word = true;
        }
    }

    if (in_word) {
        words++;
    }

    printf("Lines: %d\n", lines);
    printf("Words: %d\n", words);
    printf("Characters: %d\n", characters);
}

int main() {
    printf("Enter text (Ctrl+D to end input):\n");
    wc();
    return 0;
}
