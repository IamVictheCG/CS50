#include "helpers.h"

typedef struct
{
    BYTE rgbtBlue;
    BYTE rgbtGreen;
    BYTE rgbtRed;
}
RGBTRIPLE;

void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    // Change all black pixels to a color of your choosing

    RGNTRIPLE row1[9];
    row1[0].rgbtBlue = image[840][54];
    row1[0].rgbtGreen = image[80][54];
    row1[0].rgbtRed = image[80][54];
}
