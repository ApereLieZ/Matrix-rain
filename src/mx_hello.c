#include"header.h"

void screensaver() {
    int counter;
    const char text_matrix[4][25] = {
        "Wake up, Neo..",
        "The matrix has you..",
        "Follow the white rabbit",
        "Knock, Knock, Neo"
    };
    
    for (int i = 0; i < 4; i++) {
        counter = 0;

        while(text_matrix[i][counter] != '\0') {
            mvwaddch(stdscr, 2, 6 + counter, text_matrix[i][counter] | COLOR_PAIR(1));
            counter++;
            refresh();
            usleep(200000);
        }

        usleep(700000);
        clear();
    }
}    
