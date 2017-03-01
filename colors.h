#ifndef COLORS_H_INCLUDED
#define COLORS_H_INCLUDED

#define cmdDarkRed SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
#define cmdDarkGreen SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
#define cmdDarkBlue SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
#define cmdRed SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
#define cmdGreen SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
#define cmdBlue SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_INTENSITY);
#define cmdBlack SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
#define cmdWhite SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
#define cmdGray SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
#define cmdYellow SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);

#define rgbRed al_map_rgb(255, 0, 0)
#define rgbGreen al_map_rgb(0, 255, 0)
#define rgbBlue al_map_rgb(0, 0, 255)
#define rgbBlack al_map_rgb(0, 0, 0)
#define rgbWhite al_map_rgb(255, 255, 255)
#define rgbGray al_map_rgb(128, 128, 128)
#define rgbYellow al_map_rgb(255, 255, 0)
#define rgbSilver al_map_rgb(192, 192, 192)

#endif // COLORS_H_INCLUDED
