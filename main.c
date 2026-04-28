
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

const char* words[] = {
    /*"hangman",
    "Eichhörnchen",
    "Gitarre",
    "Flummibär",
    "Kakerlake"
    */
    "did",
    "ttchef"
};



bool has_won(const char* word, bool found_chars[26]) {
    const int word_len = strnlen(word, 64);
    int found_count = 0;
    for (int i = 0; i < word_len; i++) {
        const char c = toupper(word[i]);
        if (found_chars[c - 'A']) found_count += 1;
    }
    return word_len == found_count;
}

void display(const char* word, bool found_chars[26]) {
    const int word_len = strnlen(word, 64);
    for (int i = 0; i < word_len; i++) {
        const char c = toupper(word[i]);
        printf("%c ", found_chars[c - 'A'] ? c : '_');
    }
    printf("\n");
}

int main() {
    setlocale(LC_ALL, "");
    srand(time(NULL));

    bool found_chars[26] = {0};
    
    int count = sizeof(words) / sizeof(words[0]);
    int random_index = rand() % count;
    int random_word_len = strlen(words[random_index]);
    const char* word = words[random_index];

    display(word, found_chars);

    while(1) {

        const char guess = toupper(getchar());
        printf("\r");
        fflush(stdout);

        found_chars[guess - 'A'] = true;

        display(word, found_chars);
        if (has_won(word, found_chars)) {
            printf("You won!\n");
            break;
        }
    }

    return 0;
}
