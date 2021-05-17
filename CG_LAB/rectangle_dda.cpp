#include<graphics.h>
#include<conio.h>
#include<math.h>
#define ROUND(x)((int)(x+0.5))

void ddaline(int x1, int y1, int x2, int y2, int c)
{

int dx = x2 - x1;int dy = y2 - y1;
int steps;
if(abs(dx) > abs(dy))
steps = abs(dx);
else steps = abs(dy);
float x_inc = dx / (float)steps;
float y_inc = dy / (float)steps;
int x = x1, y = y1;
putpixel(x, y, c);
for (int i = 0; i < steps; ++i)
{
    x += x_inc;
    y += y_inc;
    putpixel(ROUND(x), ROUND(y), c);
}
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm," ");
ddaline(10, 10, 50, 10, 111);
ddaline(10, 10, 10, 50, 111);
ddaline(50, 10, 50, 50, 111);
ddaline(10, 50, 50, 50, 111);
getch();
closegraph();


}