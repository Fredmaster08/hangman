
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {
    setlocale(LC_ALL, "");
    srand(time(NULL));

    const char* words[] = {
        "hangman",
        "Eichhörnchen",
        "Gitarre",
        "Flummibär",
        "Kakerlake"
    };

    int count = sizeof(words) / sizeof(words[0]);
    int random_index = rand() % count;
    int random_word_len = strlen(words[random_index]);

    char board[random_word_len + 1];
    for (int i = 0; i < random_word_len; i++) {
        board[i] = '_';

    }

    board[random_word_len] = '\0';
    printf("%s\n", words[random_index]);
    for (int i = 0; i < random_word_len; i++) {
        printf("%c ", board[i]);
    }
    fflush(stdout);
    
    int input = 0;

    while(1)  {
        for (int i = 0; i < random_word_len; i++) {
            
        }
    }


    return 0;
}
