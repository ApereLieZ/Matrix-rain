#include "header.h"

void mx_mrain() {

    int row, coll;

    getmaxyx(stdscr, row, coll);

    int first[coll];
    int length[coll];
    int arr[coll];
    int speed = 100;
    int color = 1;
    char alfbet = 'n';

    for(int i = 0; i < coll; i++) {
        first[i] = -1 * (rand() % 80); 
        arr[i] = first[i];
        length[i] = rand() % 70 + 1;
    }

    while(true) {
        for(int i = 0; i < coll; i += 2) {
            wchar_t rd_char = (wchar_t)mx_rand_char(alfbet);
             if(i % 4 == 0){
                  rd_char = (wchar_t)"\t";
                 
             }
            attroff(COLOR_PAIR(color));
			attron(COLOR_PAIR(2));
            mvprintw(arr[i] + 1, i, "%lc", rd_char);
            attroff(COLOR_PAIR(2));
            attron(COLOR_PAIR(color));
            mvprintw(arr[i], i, "%lc", rd_char);
            mvprintw(arr[i] - length[i], i, "\t");

            if(arr[i] - length[i] > row) {
                arr[i] = first[i];
            }
            arr[i]++; 
        }

    usleep(1000 * speed);
    nodelay(stdscr, true);
    noecho();

    char ch = getch();
        if (ch == 'q') {
            clear();
            break;
        }
        if (ch == '-'){
            if (speed < 300){
                speed += 10;
                continue;
            }
            continue;
        }
        else if (ch == '+'){
            if (speed > 20){
                speed -= 10;
                continue;
                }
            continue;
        }
        else if (ch == '1'){
            color = 1;
            continue;
        }
        else if (ch == '2'){
            color = 2;
            continue;
        }
        else if (ch == '3'){
            color = 3;
            continue;
        }
        else if (ch == '4'){
            color = 4;
            continue;
        }
        else if (ch == '5'){
            color = 5;
            continue;
        }
        else if (ch == '6'){
            color = 6;
            continue;
        }
        else if (ch == '7'){
            color = 7;
            continue;
        }
        else if (ch == '0'){
            alfbet = '0';
            continue;
        }
        else if (ch == 'p'){
            alfbet = 'p';
            continue;
        }
        else if (ch == 'n'){
            alfbet = 'n';
            continue;
        }
        else if (ch == 'j'){
            alfbet = 'j';
            continue;
        }
    }
}
