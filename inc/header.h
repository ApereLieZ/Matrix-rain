#define _HEADER_
#ifdef _HEADER_

#include <ncurses.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

wchar_t mx_rand_char(char alfbet);
void matrix_rain(WINDOW *mainwindow);
int mx_strcmp(const char *s1, const char *s2);
void mx_printerr(const char*);
int mx_strlen(const char*);
void mx_mrain();
void mx_color();
void screensaver();

#endif
