#include "header.h"


int main(int argc, char* argv[]) {
    setlocale(LC_ALL, "ja_JP.UTF-8");
    if (argc > 2) {
        mx_printerr("Usage: ./matrix_rain [-s]\n");
        exit(-1);
    }

    bool is_scrsv = false;
    if(argc == 2) {
        if(mx_strcmp(argv[1], "-s") == 0) {
            is_scrsv = true;
            
        }
        else {
            mx_printerr("Usage: ./matrix_rain [-s]\n");
            exit(-1);
        }
    }

    initscr();
    mx_color();

    if(!is_scrsv) {
        screensaver();
    }
    
    mx_mrain();
    refresh();
    endwin();

}
