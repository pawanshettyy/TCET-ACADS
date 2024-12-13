/*10 mark ques, q no 3 */

#include <graphics.h> // not downloaded
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI"); // Change the path to the BGI folder on your system

    // Set different colors and put pixels
    putpixel(100, 100, RED);
    putpixel(150, 100, GREEN);
    putpixel(200, 100, BLUE);
    putpixel(250, 100, YELLOW);
    putpixel(300, 100, CYAN);
    putpixel(350, 100, MAGENTA);
    putpixel(400, 100, WHITE);

    getch();
    closegraph();
    return 0;
}