
#include<graphics.h>
#include<iostream>;
using namespace std;
int main()
{

    int x1,y1;
    cout<<"ENTER THE POINT";
    x1=2;y1=7;
    int dg=DETECT,gm;
    initgraph(&dg,&gm," ");
    putpixel(x1,y1,YELLOW);
    getch();
    closegraph();
}

