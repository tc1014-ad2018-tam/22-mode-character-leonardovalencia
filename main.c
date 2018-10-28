/*
 * This program will allow the user to enter a string.
 * Then it will check which is the most repeated character in the string.
 *
 * Author: Marco Leonardo Valencia Martinez
 * Date: October 28th, 2018
 * Mail: A01412017@itesm.mx
 *
 */
#include <stdio.h>
#include <string.h>

int main() {
    // Here I declare my variables.
    char str[100];
    int ctr = 0;
    char mode = str[0];
    int cnt;
    cnt = 0;
    // Here I ask the user for the string.
    printf("Give me your string:\n");
    fgets(str, sizeof(str), stdin);

    // This compares a character with the others.
    for (int i = 0; i < strlen(str); i++) {
        ctr = 0;
        for (int x = i + 1; x < strlen(str); x++) {
            // This is for preventing the program from counting spaces.
            if (str[i] == str[x] && str[x] != ' ') {
                ctr++;
            }
        }
        // When a new character is repeated more than a previous, it'll have a new value.
        if (ctr > cnt) {
            cnt = ctr;
            mode = str[i];
        }
    }

    printf("The most repeated character is %c", mode);

    return 0;
}