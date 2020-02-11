#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

void drawline(int x1,int y1,int x2,int y2)
{
  int dx,dy,m,s;
  float xi,yi,x,y;
   dx = x2 - x1;
    dy = y2 - y1;

    if (abs(dx) > abs(dy))
 s = abs(dx);
    else
 s = abs(dy);

    xi = dx / (float) s;
    yi = dy / (float) s;

    x = x1;
    y = y1;

    putpixel(x1, y1, WHITE);

    for (m = 0; m < s; m++)
{
 x += xi;
 y += yi;
 putpixel(x, y, WHITE);
    }

}
int main()
{

  initwindow(800,800,"Traingle using DDA by Suparna Adhikari");

    

    
    drawline(20,100,70,30);
    drawline(70,30,120,100);
    drawline(20,100,120,100);
    getch();
}
