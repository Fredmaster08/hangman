
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define WORD

void init_board(const char* words[], char board[]) {
    int length = strlen(*words);
    for (int i = 0; i < length; i++) {
        board[i] = '_';
    }
}

void print_board(char board[], int length) {
       
}

int main() {
    setlocale(LC_ALL, "");

    const char* words[] = {
        "hangman",
        "Eichhörnchen",
        "Gitarre",
        "Flummibär",
        "Kakerlake"
    };

    char board[] = {'_'};
    int length = 0;
    

    init_board(words, board);
    fflush(stdout);

    while(1) {
        
    }

    return 0;
}
