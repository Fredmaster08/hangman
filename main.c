
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void init_board(const char* words[], char board[]) {
    int length = strlen(*words);
    for (int i = 0; i < length; i++) {
        board[i] = '_';
    }
}

const char* get_random_word(const char* words[], int count) {
    count = sizeof(*words) / sizeof(*words[0]);
    int random_word = rand() % count;
    const char* word = words[random_word];
    return word;
}

void print_board(char board[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%c", board[i]);
        printf(" ");
    }
    printf("\n");
}

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
    for (int i = 0; i < )


    printf("%s\n%s\n", words[random_index], board);
    


    return 0;
}
