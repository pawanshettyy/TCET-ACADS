/*5 mark ques, q no 4*/

#include <graphics.h> // not downloaded
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    // Set color and draw a line
    setcolor(RED);
    line(100, 100, 200, 200);

    // Draw a rectangle
    rectangle(150, 150, 300, 300);

    // Draw a circle
    circle(250, 250, 50);

    // Draw an ellipse
    ellipse(300, 300, 0, 360, 100, 50);

    // Fill a rectangle with color
    setfillstyle(SOLID_FILL, BLUE);
    floodfill(160, 160, WHITE);

    getch();
    closegraph();
    return 0;
}