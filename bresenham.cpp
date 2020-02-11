#include <graphics.h>
void lineBres(int xa,int ya,int xb,int yb)
{

    int dx=abs(xa-xb), dy=abs(ya-yb);
    int p=2*dy -dx;
    int twoDy=2*dy, twoDyDx= 2*(dy-dx);
    int x,y,xEnd;
    if(xa>xb){
        x=xb;
        y=yb;

    }
    else
    {

        x=xa;
        y=ya;
        xEnd=xb;
    }
    putpixel(x,y,7);
    while(x<xEnd)
    {
        x++;
        if(p<0)
            p+=twoDy;
        else
        {

            y++;
            p+=twoDyDx;
        }
        putpixel(x,y,7);
    }
}
int main()
{

    initwindow(400,400,"First Sample");
    lineBres(100,200,250,300);
    while (!kbhit( ))
    {
        delay(200);
    }
}
    
    
    
